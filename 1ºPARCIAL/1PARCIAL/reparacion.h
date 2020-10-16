#ifndef REPARACION_H_INCLUDED
#define REPARACION_H_INCLUDED



struct eReparacion
{
    int idReparacion; //autoincremental.
    struct eElectrodomestico *serie;
    struct eServicio *idServicio;
    struct eFecha;
};

#endif // REPARACION_H_INCLUDED
