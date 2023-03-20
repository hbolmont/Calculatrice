#include "fenetre.hpp"
#include <QPushButton>
#include <QLineEdit>


Fenetre::Fenetre(QWidget *parent) : QWidget(parent)
{
    setFixedSize(600, 800);

    QLineEdit *lineEdit = new QLineEdit(this);
    lineEdit->setPlaceholderText("");
    lineEdit->setReadOnly(true);
    lineEdit->setGeometry(150, 150, 300, 60);


    m_boutonegal = new QPushButton("=", this);
    m_boutonegal->setGeometry(530, 700, 60, 60);

    m_boutonmoins = new QPushButton("-", this);
    m_boutonmoins->setGeometry(530, 630, 60, 60);

    m_boutonfois = new QPushButton("x", this);
    m_boutonfois->setGeometry(530, 560, 60, 60);

    m_boutondivise = new QPushButton("/", this);
    m_boutondivise->setGeometry(530, 490, 60, 60);

    m_boutonplus = new QPushButton("+", this);
    m_boutonplus->setGeometry(530, 420, 60, 60);

    m_boutonjsp = new QPushButton("jsp", this);
    m_boutonjsp->setGeometry(460, 700, 60, 60);

    m_boutonvirgule = new QPushButton(".", this);
    m_boutonvirgule->setGeometry(390, 700, 60, 60);

    m_bouton0 = new QPushButton("0", this);
    m_bouton0->setGeometry(320, 700, 60, 60);

    m_bouton3= new QPushButton("3", this);
    m_bouton3->setGeometry(460, 630, 60, 60);

    m_bouton2 = new QPushButton("2", this);
    m_bouton2->setGeometry(390, 630, 60, 60);

    m_bouton1 = new QPushButton("1", this);
    m_bouton1->setGeometry(320, 630, 60, 60);

    m_bouton6 = new QPushButton("6", this);
    m_bouton6->setGeometry(460, 560, 60, 60);

    m_bouton5 = new QPushButton("5", this);
    m_bouton5->setGeometry(390, 560, 60, 60);

    m_bouton4 = new QPushButton("4", this);
    m_bouton4->setGeometry(320, 560, 60, 60);

    m_bouton9 = new QPushButton("9", this);
    m_bouton9->setGeometry(460, 490, 60, 60);

    m_bouton8 = new QPushButton("8", this);
    m_bouton8->setGeometry(390, 490, 60, 60);

    m_bouton7 = new QPushButton("7", this);
    m_bouton7->setGeometry(320, 490, 60, 60);

    m_boutonclear = new QPushButton("Clear", this);
    m_boutonclear->setGeometry(320, 420, 130, 60);

    m_boutoneffacer= new QPushButton("Effacer", this);
    m_boutoneffacer->setGeometry(460, 420, 60, 60);
}
