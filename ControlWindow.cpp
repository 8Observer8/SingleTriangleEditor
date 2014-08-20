#include "ControlWindow.h"
#include "ui_ControlWindow.h"

ControlWindow::ControlWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlWindow)
{
    ui->setupUi(this);
}

ControlWindow::~ControlWindow()
{
    delete ui;
}

void ControlWindow::on_setButton_clicked()
{
    double red = ui->redDSpinBox->value();
    double green = ui->greenDSpinBox->value();
    double blue = ui->blueDSpinBox->value();

    Color color( red, green, blue );

    emit signalSetSceneBackground( color );
}
