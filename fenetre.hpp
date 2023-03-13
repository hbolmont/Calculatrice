#ifndef FENETRE_HPP
#define FENETRE_HPP

#include <QWidget>

class QPushButton;
class Fenetre : public QWidget {
    public :
        Fenetre(QWidget * parent = nullptr);
    private :
        QPushButton * m_bouton;
};
#endif