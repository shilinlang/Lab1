#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStack>
#include <QKeyEvent>
#include <QMap>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString operand = "0";
    int flag = 1;    //用于判断是否为计算之后的结果
    QString opcode;
    QStack<QString> operands;
    QStack<QString> opcodes;
    QMap<int, QPushButton *> digitBTNs;
    QMap<int, QPushButton *> opcodeBTNs;

    QString calculation(bool *ok = NULL);

private slots:
    void btnNumClicked();

    void btnBinaryOperatorClicked();

    void btnUnaryOperatorClicked();

    void on_btnPoint_clicked();

    void on_btnDel_clicked();

    void on_btnC_clicked();

    void on_btnEqual_clicked();

    virtual void keyPressEvent(QKeyEvent *event);

    void on_pushButton_17_clicked();

    void on_btnCE_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
