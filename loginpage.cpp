#include <string>
#include <iostream>
#include <fstream>

// --------------------------------------------------------------------------
// Callback function for window exit events.
static void Quit(IlvView* view, IlAny)
{
    // Cleaning up the display.
    delete view->getDisplay();
    // Exiting the application.
    IlvExit(0);
}


// **************************************************************************
// Entry point
// **************************************************************************
int main(int argc, char* argv[])
{
    // Creating a new Views display object.
    // This is a connection between the Views framework and the operating system.
    IlvDisplay* display = new IlvDisplay("css_sample", "", argc, argv);

    // Checking if initialization succeeded, otherwise exiting gracefully.
    if (display->isBad()) {
        IlvFatalError("Can't open display...");
        delete display;
        return 1;
    }

    // Creating a view to house our gadgets.
    IlvGadgetContainer* container = new IlvGadgetContainer(
            display,                                 // The display object we created before.
            "IlvHierarchicalSheet_css_sample",       // The name for this instance.
            "IlvHierarchicalSheet CSS Sample",       // The title for the window.
            IlvRect(100, 100, 350, 500));            // The size and position for the window.

    // Tell the display to select CSS Look and Feel.
    display->setLookFeelHandler(display->getLookFeelHandler(IlGetSymbol(ILV_CSS_LFNAME)));
   
    // Tell the display to load a stylesheet
    std::ifstream css_sheet("ilvHierarchicalSheet.css");
    display->addStyleSheet(css_sheet);

    // Make window top bar close button work by adding a callback to handle exit events.
    container->setDestroyCallback(Quit);

    // Create an IlvHierarchicalSheet.
    IlvHierarchicalSheet* sheet = new IlvHierarchicalSheet(display,
                         IlvRect(50, 40, 250, 400),  // The size and place for the 
     // IlvHierarchicalSheet.
                         2,                          // Number of columns
                         0,                          // Initial number of rows. We will add 
     // rows later.
                         100,                        // Initial width of the grid cells.
                         22,                         // Height of the grid cells.
                         IlvDefaultGadgetThickness,  // Default thickness.
                         IlFalse, IlFalse);          // No scrollbars.

    // Automatic column size mode.
    sheet->autoFitToSize(IlTrue);

    // Allow to select whole row.
    sheet->setAutoLineSelect(IlTrue);

    // Allow to select only one row at a time.
    sheet->setExclusive(IlTrue);

    // Show the tree lines connecting items to their parents.
    sheet->showLines(IlTrue);

    // Enable grid.
    sheet->showGrid(IlTrue);

    // Default value of spacing is 1px. Set spacing to 0px. 
    sheet->setSpacing(0);

    // Adding header to "Property" column of the sheet.
    sheet->set(0, 0, new IlvLabelMatrixItem(display->getMessage("Property")));
    sheet->setItemRelief(0, 0, IlTrue);
    sheet->setItemReadOnly(0, 0, IlTrue);
    sheet->setItemSensitive(0, 0, IlFalse);
    sheet->setItemGrayed(0, 0, IlFalse);

    // Adding header to "Value" column of the sheet.
    sheet->set(1, 0, new IlvLabelMatrixItem(display->getMessage("Value")));
    sheet->setItemRelief(1, 0, IlTrue);
    sheet->setItemReadOnly(1, 0, IlTrue);
    sheet->setItemSensitive(1, 0, IlFalse);
    sheet->setItemGrayed(1, 0, IlFalse);

    // Creating tree nodes.
    IlvBitmap* img = display->getBitmap("icon/disk.png", true);

    IlvTreeGadgetItem* rootNode = new IlvTreeGadgetItem("Root node", img);

    IlvTreeGadgetItem* leaf1 = new IlvTreeGadgetItem("Leaf 1", img);
    IlvTreeGadgetItem* leaf2 = new IlvTreeGadgetItem("Leaf 2");
    IlvTreeGadgetItem* leaf3 = new IlvTreeGadgetItem("Leaf 3");

    IlvTreeGadgetItem* leaf11 = new IlvTreeGadgetItem("Leaf 11");
    IlvTreeGadgetItem* leaf12 = new IlvTreeGadgetItem("Leaf 12");
    IlvTreeGadgetItem* leaf13 = new IlvTreeGadgetItem("Leaf 13", img);
    IlvTreeGadgetItem* leaf14 = new IlvTreeGadgetItem("Leaf 14");

    IlvTreeGadgetItem* leaf131 = new IlvTreeGadgetItem("Leaf 131", img);
    IlvTreeGadgetItem* leaf1311 = new IlvTreeGadgetItem("Leaf 1311");

    // Adding tree nodes to sheet.
    sheet->addItem(0, rootNode);

    sheet->addItem(rootNode, leaf1);
    sheet->addItem(rootNode, leaf2);
    sheet->addItem(rootNode, leaf3);

    sheet->addItem(leaf1, leaf11);
    sheet->addItem(leaf1, leaf12);
    sheet->addItem(leaf1, leaf13);
    sheet->addItem(leaf1, leaf14);

    sheet->addItem(leaf13, leaf131);
    sheet->addItem(leaf131, leaf1311);

    sheet->shrinkItem(leaf13);
    sheet->shrinkItem(leaf131);

    // Adding nodes "Value" column of the sheet.
    for (int row = 1 ; row < sheet->rows(); row++) {
        sheet->set(1, row, new IlvIntMatrixItem(row*row));
    }

    // Add the sheet to the view.
    container->addObject(sheet);

    // Tell views to run the message loop.
    IlvMainLoop();

    return 0;
}