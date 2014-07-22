#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    
    
    // for example 
}



 // another example from emac

Dialog::~Dialog()
{
    delete ui;

}
