#include <QtWidgets>
#include "io.h"

void write(MainWindow *mainwindow)
{
    QXmlStreamWriter xmlWriter;
    QFile file("output.xml");
    if (!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(0, "Error!", "Error opening file");
    }
    else
    {
        xmlWriter.setDevice(&file);

        /* Writes a document start with the XML version number. */
        xmlWriter.writeStartDocument();

        for(int i = 0;i<mainwindow->nbBiens;i++)
        {
            xmlWriter.writeStartElement("Bien");


            xmlWriter.writeAttribute("id",QString::number(i));

            xmlWriter.writeAttribute("titre",mainwindow->listeBiens[i].titre);

            if(mainwindow->listeBiens[i].estAchat)
            {
                xmlWriter.writeAttribute("estAchat","true");
            }
            else
            {
                xmlWriter.writeAttribute("estAchat","false");
            }

            if(mainwindow->listeBiens[i].estLocation)
            {
                xmlWriter.writeAttribute("estLocation","true");
            }
            else
            {
                xmlWriter.writeAttribute("estLocation","false");
            }

            if(mainwindow->listeBiens[i].estMaison)
            {
                xmlWriter.writeAttribute("estMaison","true");
            }
            else
            {
                xmlWriter.writeAttribute("estMaison","false");
            }

            if(mainwindow->listeBiens[i].estAppartement)
            {
                xmlWriter.writeAttribute("estAppartement","true");
            }
            else
            {
                xmlWriter.writeAttribute("estAppartement","false");
            }

            if(mainwindow->listeBiens[i].estChateau)
            {
                xmlWriter.writeAttribute("estChateau","true");
            }
            else
            {
                xmlWriter.writeAttribute("estChateau","false");
            }

            if(mainwindow->listeBiens[i].estFerme)
            {
                xmlWriter.writeAttribute("estFerme","true");
            }
            else
            {
                xmlWriter.writeAttribute("estFerme","false");
            }

            if(mainwindow->listeBiens[i].estBureau)
            {
                xmlWriter.writeAttribute("estBureau","true");
            }
            else
            {
                xmlWriter.writeAttribute("estBureau","false");
            }

            if(mainwindow->listeBiens[i].estCommerce)
            {
                xmlWriter.writeAttribute("estCommerce","true");
            }
            else
            {
                xmlWriter.writeAttribute("estCommerce","false");
            }

            if(mainwindow->listeBiens[i].estAutre)
            {
                xmlWriter.writeAttribute("estAutre","true");
            }
            else
            {
                xmlWriter.writeAttribute("estAutre","false");
            }

            xmlWriter.writeAttribute("nbPieces",QString::number(mainwindow->listeBiens[i].nbPieces));
            xmlWriter.writeAttribute("superficie",QString::number(mainwindow->listeBiens[i].superficie));
            xmlWriter.writeAttribute("habitable",QString::number(mainwindow->listeBiens[i].habitable));
            xmlWriter.writeAttribute("adresse",mainwindow->listeBiens[i].adresse);
            xmlWriter.writeAttribute("description",mainwindow->listeBiens[i].description);
            xmlWriter.writeAttribute("prixVente",QString::number(mainwindow->listeBiens[i].prixVente));
            xmlWriter.writeAttribute("prixLocation",QString::number(mainwindow->listeBiens[i].prixLocation));

            xmlWriter.writeEndElement();

            /*end tag students*/
            xmlWriter.writeEndElement();
            /*end document */
            xmlWriter.writeEndDocument();
        }
    }
}
