#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QMessageBox>
#include <QDir>
#include "history.h"
#include "pList/pList.h"
#include "client.h"

namespace Ui
{
    class MainWindowClass;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;
    std::vector<pList::Proc> processes;
    History *history;

private slots:
    void updateList();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
