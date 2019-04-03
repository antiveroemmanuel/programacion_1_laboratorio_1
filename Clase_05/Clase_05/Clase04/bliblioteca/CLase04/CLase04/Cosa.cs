using System;
using System.Collections.Generic;
using System.Text;

namespace CLase04
{
    public class Cosa
    {
        public int entero;
        public string cadena;
        public DateTime fecha;

        public Cosa()
        {
           this.entero = 10;
           this.cadena = "Sin valor";
           this.fecha = DateTime.Now;

         }
        public Cosa(int newEntero):this()
        {
          this.entero = newEntero;
        //  this.cadena = "Sin valor";
       //   this.fecha = DateTime.Now;

        }

          public Cosa(int newEntero,DateTime newFecha ) : this(newEntero)
    {
           // this.entero = newEntero;
          //  this.cadena = "Sin valor";
            this.fecha = newFecha;


          }

          public Cosa(int newEntero, DateTime newFecha,string newCadena) : this(newEntero, newFecha)
    {
           // this.entero = newEntero;
            this.cadena = newCadena;
           // this.fecha = this.fecha = newFecha; ;

          }

        public string Mostrar() {

            return this.entero.ToString() + " - " + this.cadena + " - " + this.fecha.ToString();

        }//entero -cadena-fecha

        public static string Mostrar(Cosa cosa)//entero -cadena-fecha
        {
            return cosa.Mostrar();//cosa.entero.ToString() + "-" + cosa.cadena + "-" + cosa.fecha.ToString();
        }

        public void EstablecerValor(DateTime newFecha)//fecha
        {
            this.fecha = newFecha;
         }
        public void EstablecerValor(int newEntero)//entero
        {
            this.entero = newEntero;
        }
        public void EstablecerValor(string newCadena)//cadena
        {
            this.cadena = newCadena;
        }
    }
}
