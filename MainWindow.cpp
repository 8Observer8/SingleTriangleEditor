#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_controlWindow = new ControlWindow;
    m_sceneWindow = new SceneWindow;

    ui->mdiArea->addSubWindow( m_sceneWindow );
    ui->mdiArea->addSubWindow( m_controlWindow );

    connect( m_controlWindow, SIGNAL( signalSetSceneBackground( Color ) ),
             m_sceneWindow, SLOT( slotSetSceneBackground( Color ) ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}
