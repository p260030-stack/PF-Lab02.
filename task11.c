#include <stdio.h>
int main ()
{
int teaqty = 3;
float teaprice = 60.00;
int samosaqty = 4;
float samosaprice = 40.50;
int rollqty = 2;
float rollprice = 120.00;
float teasubtotal = teaqty * teaprice;
float samosasubtotal = samosaqty * samosaprice;
float rollsubtotal = rollqty * rollprice;
float billsubtotal = teasubtotal + samosasubtotal + rollsubtotal;
float gst = 0.16 * billSubtotal;
float finalamount = billsubtotal + gst;
printf("Item\t\tQuantity\tPrice\tSubtotal\n");
printf("Bill Subtotal\t%.2f PKR\n", billsubtotal);
printf("GST (16%%)\t%.2f PKR\n", gst);
printf("Final Amount\t%2f PKR\n", finalamount);

return 0;
}