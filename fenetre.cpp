#include "fenetre.hpp"
#include <QPushButton>

Fenetre::Fenetre(QWidget *parent) : QWidget(parent)
{
    setFixedSize(600, 800);
    m_bouton = new QPushButton("Boutton", this);
    m_bouton->setGeometry(10, 10, 170, 30);
}