/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *sub_plus;
    QPushButton *sub_minus;
    QPushButton *sub_save;
    QTableView *tableView_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *_2;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QComboBox *colorBox;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QComboBox *colorBox_2;
    QPushButton *pushButton_6;
    QLabel *label_5;
    QComboBox *comboBox;
    QPushButton *pushButton_7;
    QToolButton *toolButton;
    QPushButton *pushButton_8;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(899, 600);
        MainWindow->setMinimumSize(QSize(700, 400));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-BD-Desktop_Qt_5_9_9_GCC_64bit-Debug/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(9);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(tableView);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sub_plus = new QPushButton(centralwidget);
        sub_plus->setObjectName(QStringLiteral("sub_plus"));
        sub_plus->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(sub_plus);

        sub_minus = new QPushButton(centralwidget);
        sub_minus->setObjectName(QStringLiteral("sub_minus"));
        sub_minus->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(sub_minus);

        sub_save = new QPushButton(centralwidget);
        sub_save->setObjectName(QStringLiteral("sub_save"));
        sub_save->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(sub_save);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_2->addWidget(tableView_2);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_6);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        horizontalLayout_7 = new QHBoxLayout(groupBox);
        horizontalLayout_7->setSpacing(9);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, -1, -1, -1);
        fontComboBox = new QFontComboBox(groupBox);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        sizePolicy1.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy1);
        fontComboBox->setMaximumSize(QSize(150, 16777215));

        _2->addWidget(fontComboBox);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(25, 25));

        _2->addWidget(pushButton_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        _2->addWidget(label_3);

        colorBox = new QComboBox(groupBox);
        colorBox->setObjectName(QStringLiteral("colorBox"));
        sizePolicy1.setHeightForWidth(colorBox->sizePolicy().hasHeightForWidth());
        colorBox->setSizePolicy(sizePolicy1);
        colorBox->setMaximumSize(QSize(150, 16777215));
        colorBox->setEditable(true);

        _2->addWidget(colorBox);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMaximumSize(QSize(25, 25));

        _2->addWidget(pushButton_4);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        _2->addWidget(label_4);

        colorBox_2 = new QComboBox(groupBox);
        colorBox_2->setObjectName(QStringLiteral("colorBox_2"));
        colorBox_2->setEditable(true);

        _2->addWidget(colorBox_2);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(25, 25));

        _2->addWidget(pushButton_6);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        _2->addWidget(label_5);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMaximumSize(QSize(150, 16777215));
        comboBox->setEditable(true);

        _2->addWidget(comboBox);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(25, 25));

        _2->addWidget(pushButton_7);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMaximumSize(QSize(50, 25));

        _2->addWidget(toolButton);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMaximumSize(QSize(60, 50));

        _2->addWidget(pushButton_8);

        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        sizePolicy1.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy1);
        toolButton_2->setMaximumSize(QSize(50, 25));

        _2->addWidget(toolButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_3);


        horizontalLayout_7->addLayout(_2);


        verticalLayout_3->addWidget(groupBox);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        verticalLayout_3->setStretch(2, 2);

        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 899, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\275\320\260\321\217 \320\272\320\275\320\270\320\266\320\272\320\260", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", Q_NULLPTR));
        sub_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        sub_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        sub_save->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\320\260\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\321\202\320\265\320\272\321\201\321\202 ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\321\204\320\276\320\275 ", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
         << QApplication::translate("MainWindow", "14", Q_NULLPTR)
         << QApplication::translate("MainWindow", "16", Q_NULLPTR)
         << QApplication::translate("MainWindow", "18", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20", Q_NULLPTR)
         << QApplication::translate("MainWindow", "22", Q_NULLPTR)
         << QApplication::translate("MainWindow", "24", Q_NULLPTR)
         << QApplication::translate("MainWindow", "26", Q_NULLPTR)
         << QApplication::translate("MainWindow", "28", Q_NULLPTR)
         << QApplication::translate("MainWindow", "30", Q_NULLPTR)
         << QApplication::translate("MainWindow", "32", Q_NULLPTR)
         << QApplication::translate("MainWindow", "34", Q_NULLPTR)
         << QApplication::translate("MainWindow", "36", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38", Q_NULLPTR)
         << QApplication::translate("MainWindow", "40", Q_NULLPTR)
         << QApplication::translate("MainWindow", "42", Q_NULLPTR)
         << QApplication::translate("MainWindow", "44", Q_NULLPTR)
         << QApplication::translate("MainWindow", "46", Q_NULLPTR)
         << QApplication::translate("MainWindow", "48", Q_NULLPTR)
         << QApplication::translate("MainWindow", "50", Q_NULLPTR)
         << QApplication::translate("MainWindow", "52", Q_NULLPTR)
         << QApplication::translate("MainWindow", "54", Q_NULLPTR)
         << QApplication::translate("MainWindow", "56", Q_NULLPTR)
         << QApplication::translate("MainWindow", "58", Q_NULLPTR)
         << QApplication::translate("MainWindow", "60", Q_NULLPTR)
         << QApplication::translate("MainWindow", "62", Q_NULLPTR)
         << QApplication::translate("MainWindow", "64", Q_NULLPTR)
         << QApplication::translate("MainWindow", "66", Q_NULLPTR)
         << QApplication::translate("MainWindow", "68", Q_NULLPTR)
         << QApplication::translate("MainWindow", "70", Q_NULLPTR)
         << QApplication::translate("MainWindow", "72", Q_NULLPTR)
         << QApplication::translate("MainWindow", "74", Q_NULLPTR)
         << QApplication::translate("MainWindow", "76", Q_NULLPTR)
         << QApplication::translate("MainWindow", "78", Q_NULLPTR)
         << QApplication::translate("MainWindow", "80", Q_NULLPTR)
        );
        pushButton_7->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "Italic", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Plain", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
