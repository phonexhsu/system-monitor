#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "processinformationworker.h"
#include "resourcesworker.h"
#include "filesystemworker.h"
#include <QAction>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void handleTabChange();
    void showAboutWindow();

private:
    processInformationWorker* processesThread;
    resourcesWorker* resourcesThread;
    fileSystemWorker* filesystemThread;
    QTabWidget* mainTabs;
    QAction *quitAction, *aboutAction;
};

#endif // MAINWINDOW_H
