/*
This program converts the various  basic unit measurements in 
  1: Frequency
  2: Energy
  3: Length
  4: Temparature
  5: Weight
  6: Area
  7: Volume

*/


#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<cmath>
#include<time.h>
#include<iomanip>

using namespace std;


class input
{
  public:
        float a;
};
class frequency:public input
{
    public:
    void hertz_kilohertz(), kilohertz_hertz(), hertz_megahertz(),
    megahertz_hertz(), hertz_gigahertz(), gigahertz_hertz(),
    kilohertz_megahertz(), megahertz_kilohertz(), kilohertz_gigahertz(),
    gigahertz_kilohertz(), megahertz_gigahertz(),
    gigahertz_megahertz();
};

class energy:public input
{
    public:
    void joule_calorie(), calorie_joule();
};
class temperature:public input
 {
 public:
       void celsius_fahrenheit(), fahrenheit_celsius(), celsius_kelvin(),
       kelvin_celsius(), fahrenheit_kelvin(), kelvin_fahrenheit();
  };

  class weight:public input
    {
    public:

       void milligram_gram(), gram_milligram(), gram_kilogram(),
       kilogram_gram(), kilogram_metricTon(),metricTon_kilogram(),
       pound_kilogram(), kilogram_pound(), gram_pound(), pound_gram();
    };

  class length:public input
  {
   public:
       void millimeter_meter(), meter_millimeter(),
       centimeter_meter(), meter_centimeter(), centimeter_kilometer(),
       kilometer_centimeter(), meter_mile(), mile_meter(), kilometer_mile(),
       mile_kilometer(), feet_meter(), meter_feet(), inch_meter(),
       meter_inch(), yard_meter(), meter_yard();

      };

   class area :public input
   {
   public:

       void millimeterSquared_centimeterSquared(),
       centimeterSquared_millimeterSquared(),
       centimeterSquared_meterSquared(),
       meterSquared_centimeterSquared(), meterSquared_kilometerSquared(),
       kilometerSquared_meterSquared(), feetSquared_meterSquared(),
       meterSquared_feetSquared(), yardSquared_meterSquared(),
       meterSquared_yardSquared(), mileSquared_kilometerSquared(),
       kilometerSquared_mileSquared(), acre_kilometerSquared(),
       kilometerSquared_acre(), acre_hectare(), hectare_acre();
        };

   class vol:public input
   {
   public:

       void milliLiter_liter(), liter_milliLiter(),
       cubicMillimeter_cubicCentimeter(), cubicCentimeter_cubicMillimeter(),
       cubicCentimeter_cubicMeter(), cubicMeter_cubicCentimeter(),
       cubicInch_cubicMeter(), cubicMeter_cubicInch(),
       cubicFeet_cubicMeter(),
       cubicMeter_cubicFeet(), cubicMeter_gallon(),
       gallon_cubicMeter(), liter_gallon(), gallon_liter();

   };
   void frequency :: hertz_kilohertz()
   {
       cout<<"\n hertz= ";
       cin>>a;
       cout<<"\n kilohertz= "<<a*.001;
   }
   void frequency :: kilohertz_hertz()
   {
       cout<<"\n kilohertz= ";
       cin>>a;
       cout<<"\n hertz= "<<a*1000;
   }
   void frequency :: hertz_megahertz()
   {
       cout<<"\n hertz= ";
       cin>>a;
       cout<<"\n megahertz= "<<a*.000001;
   }
   void frequency :: megahertz_hertz()
   {
       cout<<"\n megahertz= ";
       cin>>a;
       cout<<"\n hertz= "<<a*1000000;
   }
   void frequency :: hertz_gigahertz()
   {
       cout<<"\n hertz= ";
       cin>>a;
       cout<<"\n gigahertz= "<<a*.000000001;
    }
    void frequency :: gigahertz_hertz()
    {
      cout<<"\n gigahertz= ";
      cin>>a;
      cout<<"hertz= "<<a*1000000000;
    }
    void frequency :: kilohertz_megahertz()
    {
        cout<<"\n kilohertz= ";
        cin>>a;
        cout<<"\n megahertz= "<<a*0.001;
    }
    void frequency :: megahertz_kilohertz()
    {
        cout<<"\n megahertz= ";
        cin>>a;
        cout<<"\n kilohertz= "<<a*1000;
    }
    void frequency :: kilohertz_gigahertz()
    {
        cout<<"\n kilohertz= ";
        cin>>a;
        cout<<"\n gigahertz= "<<a*0.000001;
    }
    void frequency :: gigahertz_kilohertz()
    {
        cout<<"\n gigahertz= ";
        cin>>a;
        cout<<"\n kilohertz= "<<a*1000000;
    }
    void frequency :: megahertz_gigahertz()
    {
        cout<<"\n megahertz= ";
        cin>>a;
        cout<<"\n gigahertz= "<<a*.001;
    }
    void frequency :: gigahertz_megahertz()
    {
        cout<<"\n gigahertz= ";
        cin>>a;
        cout<<"\n megahertz= "<<a*1000;
    }
   void energy :: joule_calorie()
   {
       cout<<"\n joule= ";
       cin>>a;
       cout<<"\n calorie= "<<a*.23901;
   }
   void energy :: calorie_joule()
   {
       cout<<"\n calorie= ";
       cin>>a;
       cout<<"\n joule= "<<a*4.184;
   }

     void length ::millimeter_meter()
         {
          cout<<"\n   Millimeter= ";
          cin>>a;
          cout<<"\n   Meter= "<<a*.001;
          }
     void length ::meter_millimeter()
         {
         cout<<"\n   meter= ";
         cin>>a;
         cout<<"\n   millimeter= "<<a*1000;
         }
     void length ::centimeter_meter()
         {
          cout<<"\n   Centimeter= ";
          cin>>a;
          cout<<"\n   Meter= "<<a*.01;
          }
    void length ::meter_centimeter()
        {
         cout<<"\n   meter= ";
         cin>>a;
         cout<<"\n   cm= "<<a*100;
         }
    void length::meter_mile()
         {
         cout<<"\n   meter= ";
         cin>>a;
         cout<<"\n   mile= "<<a*.00062;
         }
    void length::mile_meter()
        {
        cout<<"\n   mile= ";
        cin>>a;
        cout<<"\n   meter= "<<a*1609.344;
        }
     void length :: centimeter_kilometer()
        {
         cout<<"\n   cm= ";
         cin>>a;
         cout<<"\n   km= "<<a*0.00001;

        }

    void length :: kilometer_centimeter()
        {   cout<<"\n   km= ";
           cin>>a;
           cout<<"\n   cm= "<<a*100000;
        }
    void length::feet_meter()
        {
        cout<<"\n   feet= ";
        cin>>a;
        cout<<"\n   meter= "<<a*.3048;
        }
    void length::meter_feet()
        {
        cout<<"\n   meter= ";
        cin>>a;
        cout<<"\n   feet= "<<a*3.28084;
        }
    void length::yard_meter()
        {
        cout<<"\n   yard= ";
        cin>>a;
        cout<<"\n   meter= " <<a*0.9144;
        }
    void length::meter_yard()
        {
        cout<<"\n   meter= ";
        cin>>a;
        cout<<"\n   yard= "<<a*1.09361;
        }
    void length::inch_meter()
        {
        cout<<"\n   inch=";
        cin>>a;
        cout<<"\n   meter="<<a*.0254;
        }
    void length::meter_inch()
        {
        cout<<"\n   meter=";
        cin>>a;
        cout<<"\n   inch="<<a*39.37008;
        }
    void length ::kilometer_mile()
        {
        cout<<"\n   kilometer=";cin>>a;
        cout<<"\n   mile="<<a*.6213712 ;
        }
    void length ::mile_kilometer( )
        {
        cout<<"\n   mile="; cin>>a;
        cout<<"\n   kilometer="<<a*1.60934;
        }

    void temperature::celsius_fahrenheit()
       {
       cout<<"\n   Celsius= ";
       cin>>a;
        cout<<"\n   Fahrenheit= " <<(((9*a)/5)+32);
       }
    void temperature::fahrenheit_celsius()
       {
       cout<<"\n   Fahrenheit= ";   cin>>a;
       cout<<"\n   Celsius= "<<(((a-32)/9)*5);
        }
    void temperature::celsius_kelvin()
        {
        cout<<"\n   celsius= ";cin>>a;
        cout<<"\n   kelvin= "<<a+273;
        }
    void temperature::kelvin_celsius()
        {
        cout<<"\n   kelvin= ";  cin>>a;
        cout<<"\n   celsius= "<<a-273;
        }



    void weight::milligram_gram()
        {
        cout<<"\n   milligram= ";cin>>a;
        cout<<"\n   gram= "<<a*.001;
        }
    void weight::gram_milligram()
        {
        cout<<"\n   gram= "; cin>>a;
        cout<<"\n   milligram= "<<a*1000;
        }
    void weight::pound_kilogram()
       {
       cout<<"\n   pound= "; cin>>a;
       cout<<"\n   kilogram= "<<a*.45359;
       }
     void weight::gram_kilogram()
        { cout<<"\n   gram= ";cin>>a;
         cout<<"\n   killogram= "<<a*.001;
         }
     void weight::kilogram_gram()
    {    cout<<"\n   killogram= ";cin>>a;
        cout<<"\n   Gram= "<<a*1000;
        }


    void weight::kilogram_pound()
      {
      cout<<"\n   kilogram= ";cin>>a;
      cout<<"\n   pound= "<<2.20462*a;
      }
    void weight::gram_pound()
      {
      cout<<"\n   gram= ";  cin>>a;
      cout<<"\n   pound= "<<a*.0022;
      }
    void weight::pound_gram()
      {
      cout<<"\n   pound= "; cin>>a;
      cout<<"\n   gram= "<<a*453.59237;
      }
    void weight::kilogram_metricTon()
      {
      cout<<"\n   kilogram= ";cin>>a;
      cout<<"\n   matric ton= "<<a*.001;
       }
    void weight::metricTon_kilogram()
      {
     cout<<"\n   metric ton= "; cin>>a;
     cout<<"\n   kilogram= "<<a*1000;
      }

    void area::millimeterSquared_centimeterSquared()
        {
        cout<<"\n   squqre mm= ";cin>>a;
        cout<<"\n   square cm= "<<a*.01;
        }
    void area::centimeterSquared_millimeterSquared()
        {
        cout<<"\n   square cm= ";cin>>a;
        cout<<"\n   square mm= "<<a*100;
        }
    void area::centimeterSquared_meterSquared()
        {
        cout<<"\n   square cm= ";cin>>a;
        cout<<"\n   square m= "<<a*.0001;
        }
    void area::meterSquared_centimeterSquared()
        {
        cout<<"\n   square m= "; cin>>a;
        cout<<"\n   square cm= "<<a*10000;
        }
    void area::meterSquared_kilometerSquared()
        {
        cout<<"\n   square m= "; cin>>a;
        cout<<"\n   square km= "<<a*.000001;
        }
    void area::kilometerSquared_meterSquared()
        {
        cout<<"\n   square km= ";cin>>a;
        cout<<"\n   square m= "<<a*1000000;
        }
    void area::feetSquared_meterSquared()
      {
      cout<<"\n   square feet= ";cin>>a;
      cout<<"\n   square m= "<<a*.0929;
      }
    void area::meterSquared_feetSquared()
      {
      cout<<"\n   square m= ";  cin>>a;
      cout<<"\n   square feet= "<<a*10.76391;
      }
    void area::yardSquared_meterSquared()
      {
      cout<<"\n   square yard= ";cin>>a;
      cout<<"\n   square m= "<<a*.83613;
      }
     void area::meterSquared_yardSquared()
       {
        cout<<"\n   square m= "; cin>>a;
        cout<<"\n   square yard= "<<a*1.19599;
       }
     void area::mileSquared_kilometerSquared()
        {
        cout<<"\n   square mile= ";cin>>a;
        cout<<"\n   square km= "<<a*2.5899;
        }
     void area::kilometerSquared_mileSquared()
        {
         cout<<"\n   square km= " ;cin>>a;
          cout<<"\n   square mile= "<<a*.3861;
        }
     void area::acre_hectare()
        {
        cout<<"\n   Acre= ";   cin>>a;
        cout<<"\n   Hector= "<<a*.40469;
        }
     void area::hectare_acre()
        {
        cout<<"\n   Hector= ";cin>>a;
        cout<<"\n   Acre= " <<a*2.47105;
        }
      void area::acre_kilometerSquared()
         {cout<<"\n   Acre= ";cin>>a;
         cout<<"\n   Square km= "<<a*.00405;
         }
      void area::kilometerSquared_acre()
      {
       cout<<"\n   Square km= ";cin>>a;
       cout<<"\n   Acre= "<<a*247.10538;

      }

     void vol::milliLiter_liter()
         {
         cout<<"\n   milli litre= ";cin>>a;
         cout<<"\n   Litre= "<<a*.001;
         }
      void vol::liter_milliLiter()
         {         cout<<"\n   Litre= "; cin>>a;
         cout<<"\n   milli Litre= "<<a*1000;
         }
     void vol::cubicCentimeter_cubicMillimeter()
         {
          cout<< "\n   cubic cm= "; cin>>a;
          cout<<"\n   cubic mm= "<<a*1000;
          }
     void vol::cubicMillimeter_cubicCentimeter()
         {
         cout<<"\n   cubic mm= ";   cin>>a;
         cout<<"\n   cubic cm= "<<a*.001;
         }
     void vol::cubicCentimeter_cubicMeter()
        {
        cout<<"\n   cubic cm= ";  cin>>a;
        cout<<"\n   cubic meter= "<<a*.000001;
        }
     void vol::cubicMeter_cubicCentimeter()
        {
        cout<<"\n   cubic meter= "; cin>>a;
        cout<<"\n   cubic cm= "<<a*1000000;
        }
     void vol::cubicInch_cubicMeter()
       {
       cout<<"\n   cubic inch= ";  cin>>a;
       cout<<"\n   cubic meter= "<<a*.00002;
       }
     void vol::cubicMeter_cubicInch()
       {
       cout<<"\n   cubic meter= "; cin>>a;
       cout<<"\n   cubic inch= "<<a*61023.74409;
       }
     void vol::cubicFeet_cubicMeter()
      {
       cout<<"\n   cubic feet= "; cin>>a;
       cout<<"\n   cubic meter= "<<a*1222 ;

      }
     void vol::cubicMeter_cubicFeet()
       {
       cout<<"\n   cubic meter= ";cin>>a;
       cout<<"\n   cubic feet= "<<a*123;
       }
     void vol::cubicMeter_gallon()
       {
       cout<<"\n   cubic meter= ";cin>>a;
       cout<<"\n   gallon= "<<a*264.17205;
       }
     void vol::gallon_cubicMeter()
       {
       cout<<"\n   Gallon= "; cin>>a;
       cout<<"\n   cubic meter= "<<a*.00379;
       }
     void vol::liter_gallon()
        {
        cout<<"\n   Litre= ";cin>>a;
        cout<<"\n   gallon= "<<a*.21997;
        }
    void vol::gallon_liter()
        {
        cout<<"\n   Gallon= "; cin>>a;
        cout<<"\n   Litre= "<<a*4.54609;
        }

void textColor(unsigned short color) {
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hcon, color);
}

    int main()
        {
   system("cls") ;
    energy e;
    frequency f;
    length l;
    weight w;
    vol v;
    area r;
    temperature t;
    int x,y;
    textColor(10);




    while(1)
    {
        system("cls") ;
        cout<<"\t\t\tWELCOME TO BASIC UNIT CONVERSION\n";
        cout<<"\n      TYPE"<<"\n     ------";
        cout<<"\n  1: Frequency\n"<<"  2: Energy\n"<<"  3: Length\n" << "  4: Temparature\n"<<"  5: Weight\n"<<"  6: Area\n"<<"  7: Volume\n" <<"  8: Exit\n";
        cout<<"\n\nselect your Convertion Type:" ;
        cin>>x;
        if(x==1)
        {
              system("cls") ;

                  cout<<"\n\n select your basic unit convertion:\n";

                    cout<<"\n  1 : hertz_kilohertz";
                    cout<<"\n  2 : kilohertz_hertz";
                    cout<<"\n  3 : hertz_megahertz";
                    cout<<"\n  4 : megahertz_hertz";
                    cout<<"\n  5 : hertz_gigahertz";
                    cout<<"\n  6 : gigahertz_hertz";
                    cout<<"\n  7 : kilohertz_megahertz";
                    cout<<"\n  8 : megahertz_kilohertz";
                    cout<<"\n  9 : kilohertz_gigahertz";
                   cout<<"\n 10 : gigahertz_kilohertz";
                   cout<<"\n 11 : megahertz_gigahertz";
                   cout<<"\n 12 : gigahertz_megahertz";
                   cout<<"\n 13 : Return to The Main Menu";

                   while(1)
                   {
                       cout<<"\n\n Please Enter Your Option= ";
                       cin>>y;
                       if(y==1)
                       {f.hertz_kilohertz();}
                       else if(y==2)
                       {f.kilohertz_hertz();}
                       else if(y==3)
                       {f.hertz_megahertz();}
                       else if(y==4)
                       {f.megahertz_hertz();}
                       else if(y==5)
                       {f.hertz_gigahertz();}
                       else if(y==6)
                       {f.gigahertz_hertz();}
                       else if(y==7)
                       {f.kilohertz_megahertz();}
                       else if(y==8)
                       {f.megahertz_kilohertz();}
                       else if(y==9)
                       {f.kilohertz_gigahertz();}
                       else if(y==10)
                       {f.gigahertz_kilohertz();}
                       else if(y==11)
                       {f.megahertz_gigahertz();}
                       else if(y==12)
                       {f.gigahertz_megahertz();}
                       else if(y==13)
                       {break;}

        }

        }
        else if(x==2)
        {
             system("cls");
             cout<<"\n\n select your basic unit convertion:\n";

             cout<<"\n  1 : joule_calorie";
             cout<<"\n  2 : calorie_joule";
             cout<<"\n  3 : Return to The Main Menu";

             while(1)
             {
             cout<<"\n\n Please Enter Your Option= ";
             cin>>y;
             if(y==1)
             { e.joule_calorie(); }
             else if(y==2)
             { e.calorie_joule(); }
             else if(y==3)
             { break; }
             }
        }

        else if(x==3)
             {           system("cls") ;

                  cout<<"\n\n select your basic unit convertion:\n";

                    cout<<"\n  1 : millimeter-meter";
                    cout<<"\n  2 : meter-millimeter";
                    cout<<"\n  3 : centimeter-meter";
                    cout<<"\n  4 : meter-centimeter";
                    cout<<"\n  5 : centimeter-kilometer";
                    cout<<"\n  6 : kilometer-centimeter";
                    cout<<"\n  7 : meter-mile";
                    cout<<"\n  8 : mile-meter";
                    cout<<"\n  9 : kilometer-mile";
                   cout<<"\n 10 : mile-kilometer";
                   cout<<"\n 11 : feet-meter";
                   cout<<"\n 12 : meter-feet";
                   cout<<"\n 13 : inch-meter";
                   cout<<"\n 14 : meter-inch";
                   cout<<"\n 15 : yard-meter";
                  cout<<"\n 16 : meter-yard";
                  cout<<"\n 17 : Return to The Main Menu";


         while(1)
               {
                cout<<"\n\n Please Enter Your Option= ";
               cin>>y;

                if (y==1)
                    { l.millimeter_meter(); }
                else if(y==2)
                    { l.meter_millimeter(); }
                else if (y==3)
                    { l.centimeter_meter(); }
                else if (y==4)
                    { l.meter_centimeter(); }
                else if (y==5)
                    { l.centimeter_kilometer(); }
                else if (y==6)
                    {  l.kilometer_centimeter(); }
                else if (y==7)
                    {  l.meter_mile(); }
                else if (y==8)
                    {   l.mile_meter(); }
                else if (y==9)
                     {   l.kilometer_mile(); }
                else if (y==10)
                    {  l.mile_kilometer(); }
                else if (y==11)
                     {  l.feet_meter(); }
                else if (y==12)
                     { l.meter_feet(); }
                 else if (y==13)
                      { l.inch_meter();}
                else if(y==14)
                    { l.meter_inch();}
                else if (y==15)
                    {l.yard_meter();}
              else if (y==16)
                    {l.meter_yard();}
              else if (y==17)
                    {break;}
           }
           }
           else if(x==4)
                 {   system("cls") ;
                  cout<<"\n\n select your basic unit convertion:\n";

                  cout<<"\n  1: Celsius-Fahrenheit";
                  cout<<"\n  2: Fahrenheit-Celsius";
                  cout<<"\n  3: Celsius-Kelvin";
                  cout<<"\n  4: Kelvin-Celcius";
                  cout<<"\n  5: Return to The Main Menu";
          while(1)
          {
          cout<<"\n\n Please Enter Your Option= ";
            cin>>y;

                if(y==1)
                   { t.celsius_fahrenheit(); }
                else if(y==2)
                   {t.fahrenheit_celsius();}
                 else if (y==3)
                   {t.celsius_kelvin();}
                else if(y==4)
                 {t.kelvin_celsius();}
                else if(y==5)
                    {break;}
            }
            }
            else if(x==5)
            {                  system("cls");
             cout<<"\n\nselect your basic unit convertion :\n";

             cout<<"\n  1: Milligm-Gramm";
             cout<<"\n  2: Gramm-milligm";
             cout<<"\n  3: Gramm-killogram";
             cout<<"\n  4: killoGramm-Gramm";
             cout<<"\n  5: pound-killogramm";
             cout<<"\n  6: killogramm-pound";
             cout<<"\n  7: Gramm-Pound";
             cout<<"\n  8: Pound-gramm";
             cout<<"\n  9: killogramm-Metric ton";
            cout<<"\n 10: Metric ton-Killogramm";
            cout<<"\n 11: Return  to The Main Menu";

           while(1)
             {
              cout<<"\n\nPlease Enter Your Option= ";
              cin>>y;

             if (y==1)
                {w.milligram_gram();}
             else if (y==2)
                {w.gram_milligram();}
             else if (y==3)
                {w.gram_kilogram();}
             else if (y==4)
                {w.kilogram_gram();}
             else if (y==5)
                {w.pound_kilogram();}
             else if (y==6)
                {w.kilogram_pound();}
             else if (y==7)
                {w.gram_pound();}
             else if (y==8)
                {w.pound_gram();}
             else if (y==9)
                {w.kilogram_metricTon();}
             else if (y==10)
                {w.metricTon_kilogram();}
             else if (y==11)
                {break;}
        }
        }
        else if(x==6)
                {            system("cls") ;
                cout<<"\n\nchoose your unit convertion:\n";

                cout<<"\n   1: Square millimeter-Square centimeter";
                cout<<"\n   2: square centimeter-Square millimeter";
                cout<<"\n   3: square centimeter-square meter";
                cout<<"\n   4: Square meter-Square centimeter";
                cout<<"\n   5: Square meter-Square kilometer";
                cout<<"\n   6: Square kilometer-Square meter";
                cout<<"\n   7: Square feet-Square meter";
                cout<<"\n   8: Square meter-Square feet";
                cout<<"\n   9: Square Yard-Square meter";
                cout<<"\n  10: Square meter-Square yard";
                cout<<"\n  11: Square mile-Square kilometer";
                cout<<"\n  12: Square kilometer-Square mile";
                cout<<"\n  13: Acre-Hectare";
                cout<<"\n  14: Hectare-Acre";
                cout<<"\n  15: Square kilometer-Acre ";
                cout<<"\n  16: Acre-Square kilometer";
                cout<<"\n  17: Return to The Main Menu";

            while(1)
            {
            cout<<"\n\nPlease Enter Your Option= ";
              cin>>y;

                if(y==1)
                  {r.millimeterSquared_centimeterSquared();}
                else if(y==2)
                {r.centimeterSquared_millimeterSquared();}
                else if(y==3)
                {r.centimeterSquared_meterSquared();}
                else if(y==4)
                {r.meterSquared_centimeterSquared();}
                else if(y==5)
                {r.meterSquared_kilometerSquared();}
                else if(y==6)
                {r.kilometerSquared_meterSquared();}
                else if(y==7)
                {r.feetSquared_meterSquared();}
                else if(y==8)
                {r.meterSquared_feetSquared();}
                else if(y==9)
                {r.yardSquared_meterSquared();}
                else if(y==10)
                {r.meterSquared_yardSquared();}
                else if(y==11)
                {r.mileSquared_kilometerSquared();}
                else if(y==12)
                {r.kilometerSquared_mileSquared();}
                else if(y==13)
                {r.acre_hectare();}
                else if(y==14)
                {r.hectare_acre();}
                else if(y==15)
                {r.kilometerSquared_acre();}
                else if(y==16)
                {r.acre_kilometerSquared();}
                else if(y==17)
                {break;}
            }
            }
        else if(x==7)
            {           system("cls") ;
               cout<<"\n\nselect your basic unit convertion:\n";

               cout<<"\n   1 : milliliter-Liter";
               cout<<"\n   2 : Liter-milliliter";
               cout<<"\n   3 : Cubic milliliter-Cubic centimeter";
               cout<<"\n   4 : Cubic centimeter-Cubic millimeter";
               cout<<"\n   5 : Cubic centimeter-Cubic meter";
               cout<<"\n   6 : Cubic meter-Cubic centimeter";
               cout<<"\n   7 : Cubic Inch-Cubic meter";
               cout<<"\n   8 : Cubic meter-Cubic Inch";
               cout<<"\n   9 : Cubic feet-Cubic meter";
               cout<<"\n  10 : Cubic meter-Cubic feet";
               cout<<"\n  11 : Cubic meter-Gallon";
               cout<<"\n  12 : Gallon-Cubic meter";
               cout<<"\n  13 : Liter-Gallon";
               cout<<"\n  14 : Gallon-Liter";
               cout<<"\n  15 : Return to The Main Menu";


            while(1)
             { cout<<"\n\nPlease Enter Your Option= ";
              cin>>y;

                if (y==1)
                  {v.milliLiter_liter();}
             else if (y==2)
                  {v.liter_milliLiter();}
             else if (y==3)
                  {v.cubicMillimeter_cubicCentimeter();}
            else if (y==4)
                  {v.cubicCentimeter_cubicMillimeter();}
            else if (y==5)
                  {v.cubicCentimeter_cubicMeter();}
            else if (y==6)
                  {v.cubicMeter_cubicCentimeter();}
            else if (y==7)
                  {v.cubicInch_cubicMeter();}
            else if (y==8)
                  {v.cubicMeter_cubicInch();}
            else if (y==9)
                  {v.cubicFeet_cubicMeter();}
            else if (y==10)
                  {v.cubicMeter_cubicFeet();}
            else if (y==11)
                  {v.cubicMeter_gallon();}
            else if (y==12)
                  {v.gallon_cubicMeter();}
            else if (y==13)
                {v.liter_gallon();}
            else if(y==14)
                {v.gallon_liter();}
            else if(y==15)
                {break;}
           }
           }

        else if(x==8){ break;}

                }
         }
