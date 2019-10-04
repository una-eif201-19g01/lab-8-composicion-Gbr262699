//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PUERTA_H
#define LAB_7_COMPOSICION_PUERTA_H

class Puerta {
private:
	Ventana* ventana;
	bool estado;
public:
	Puerta();
	Puerta(Ventana*, bool);
	void abrirPuerta();
	void cerrarPuerta();
	void abrirVentana();
	void cerrarVentana();

};


#endif //LAB_7_COMPOSICION_PUERTA_H
