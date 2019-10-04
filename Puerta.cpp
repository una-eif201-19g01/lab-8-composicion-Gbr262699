//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Puerta.h"

Puerta::Puerta() {
}

Puerta::Puerta(Ventana* vent, bool esta) {
	ventana = vent;
	estado = esta;
}

void Puerta::abrirPuerta() {
	estado = true;
}

void Puerta::cerrarPuerta() {
	estado = false;
}

void Puerta::abrirVentana() {
	ventana->abrir();
}

void Puerta::cerrarVentana() {
	ventana->cerrar();