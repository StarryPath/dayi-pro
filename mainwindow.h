#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//添加这一段代码
public slots:       //槽函数声明标志
       //槽函数
    void show_card();
    void insert_combo();
    void use_card(QString);
    int start_zhua();
    //int end_zhua();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
