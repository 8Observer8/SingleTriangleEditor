#include "SceneWindow.h"
#include "ui_SceneWindow.h"

SceneWindow::SceneWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SceneWindow)
{
    ui->setupUi(this);
}

SceneWindow::~SceneWindow()
{
    delete ui;
}

void SceneWindow::slotSetSceneBackground( const Color &color )
{
    ui->sceneWidget->setBackground( color );
}
