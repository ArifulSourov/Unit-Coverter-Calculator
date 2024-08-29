#include <stdio.h>
#include <math.h>

int inch_to_centimeter(float,float);
int centimeter_to_inch(float,float);
int feet_to_meter(float,float);
int meter_to_feet(float,float);
int yard_to_meter(float,float);
int meter_to_yard(float,float);
int mile_to_kilometer(float,float);
int kilometer_to_mile(float,float);
int nautical_mile_to_meter(float,float);
int meter_to_nautical_mile(float,float);
int acre_to_pow_meter(float,float);
int pow_meter_to_acre(float,float);
int parsec_to_kilometer(float,float);
int kilometer_to_parsec(float,float);
int ounces_to_grams(float,float);
int grams_to_ounces(float,float);
int pound_to_kg(float,float);
int kg_to_pound(float,float);
int atom_to_pascal(float,float);
int pascal_to_atom(float,float);
int mmHg_to_pascal(float,float);
int pascal_to_mmHg(float,float);
int horsepower_to_kilowatts(float,float);
int kilowatts_to_horsepower(float,float);
int kilogram_force_meter_to_joule(float,float);
int joule_to_kilogram_force_meter(float,float);
int Fahrenheit_to_Celsius(float,float);
int Celsius_to_Fahrenheit(float,float);


int main(){
    int n,a,b;
    while(1){
    printf("0.inch -> centimeter            \n");
    printf("1.centimeter -> inch            \t");
    printf("2.feet -> meter                 \n");
    printf("3.meter -> feet                 \t");
    printf("4.yard -> meter                 \n");
    printf("5.meter -> yard                 \t");
    printf("6.mile -> kilometer             \n");
    printf("7.kilometer -> mile             \t");
    printf("8.nautical mile -> meter        \n");
    printf("9.meter -> nautical mile        \t");
    printf("10.acre -> meter^2              \n");
    printf("11.meter^2 -> acre              \t");
    printf("12.parsec -> kilometer          \n");
    printf("13.kilometer -> parsec          \t");
    printf("14.ounces -> grams              \n");
    printf("15.grams -> ounces              \t");
    printf("16.pound -> kg                  \n");
    printf("17.kg -> pound                  \t");
    printf("18.atom -> pascal               \n");
    printf("19.pascal -> atom               \t");
    printf("20.mmHg -> pascal               \n");
    printf("21.pascal -> mmHg               \t");
    printf("22.horsepower -> kilowatts      \n");
    printf("23.kilowatts -> horsepower      \t");
    printf("24.kilogram-force meter -> joule\n");
    printf("25.joule -> kilogram-force meter\t");
    printf("26.Fahrenheit -> Celsius        \n");
    printf("27.Celsius -> Fahrenheit        \t");
    printf("28.joule -> calorie             \n");
    printf("29.calorie -> joule             \t");
    printf("\n\n");
    printf("Enter your choice = ");
    scanf("%d",&n);
    printf("\n\n");
 switch(n){
        case 0:
            printf("inch -> centimeter\n");
            float a,b;
            inch_to_centimeter(a,b);
            break;
        case 1:
            printf("centimeter -> inch\n");
            centimeter_to_inch(a,b);
            break;
        case 2:
            printf("feet -> meter\n");
            feet_to_meter(a,b);
            break;
        case 3:
            printf("meter -> feet\n");
            meter_to_feet(a,b);
            break;
        case 4:
            printf("yard -> meter\n");
            yard_to_meter(a,b);
            break;
        case 5:
            printf("meter -> yard\n");
            meter_to_yard(a,b);
            break;
        case 6:
            printf("mile -> kilometer\n");
            mile_to_kilometer(a,b);
            break;
        case 7:
            printf("kilometer -> mile\n");
            kilometer_to_mile(a,b);
            break;
        case 8:
            printf("nautical mile -> meter\n");
            nautical_mile_to_meter(a,b);
            break;
        case 9:
            printf("meter -> nautical mile\n");
            meter_to_nautical_mile(a,b);
            break;
        case 10:
            printf("acre -> meter^2\n");
            acre_to_pow_meter(a,b);
            break;
        case 11:
            printf("meter^2 -> acre\n");
            pow_meter_to_acre(a,b);
            break;
        case 12:
            printf("parsec -> kilometer\n");
            parsec_to_kilometer(a,b);
            break;
        case 13:
            printf("kilometer -> parsec\n");
            kilometer_to_parsec(a,b);
            break;
        case 14:
            printf("ounces -> grams\n");
            ounces_to_grams(a,b);
            break;
        case 15:
            printf("grams -> ounces\n");
            grams_to_ounces(a,b);
            break;
        case 16:
            printf("pound -> kg\n");
            pound_to_kg(a,b);
            break;
        case 17:
            printf("kg -> pound\n");
            kg_to_pound(a,b);
            break;
        case 18:
            printf("atom -> pascal\n");
            atom_to_pascal(a,b);
            break;
        case 19:
            printf("pascal -> atom\n");
            pascal_to_atom(a,b);
            break;
        case 20:
            printf("mmHg -> pascal\n");
             mmHg_to_pascal(a,b);
            break;
        case 21:
            printf("pascal -> mmHg\n");
             pascal_to_atom(a,b);
            break;
        case 22:
            printf("horsepower -> kilowatts\n");
            horsepower_to_kilowatts(a,b);
            break;
        case 23:
            printf("kilowatts -> horsepower\n");
            kilowatts_to_horsepower(a,b);
            break;
        case 24:
            printf("kilogram-force meter -> joule\n");
            kilogram_force_meter_to_joule(a,b);
            break;
        case 25:
            printf("joule -> kilogram-force meter\n");
            joule_to_kilogram_force_meter(a,b);
            break;
        case 26:
            printf("Fahrenheit -> Celsius\n");
            Fahrenheit_to_Celsius(a,b);
            break;
        case 27:
            printf("Celsius -> Fahrenheit\n");
            Celsius_to_Fahrenheit(a,b);
            break;
        case 28:
            printf("joule -> calorie\n");
            break;
        case 29:
            printf("calorie -> joule\n");
            break;
        default:
            printf("INVALID INPUT\n");
            printf("press 0 to 29");
            break;
        }
        printf("\n\n");
    }
}
int inch_to_centimeter(float a, float b){
        double in,cm;
        printf("enter value in inch:");
        scanf("%f",&in);
        cm=2.54*in;
        printf("Value in centimeter: %.2lf\n",cm);
}
int centimeter_to_inch(float a, float b){
        double in,cm;
        printf("enter value in centimeter:");
        scanf("%f",&cm);
        in=cm/2.54;
        printf("Value in inch: %lf\n",in);
}
int feet_to_meter(float a,float b){
        double ft,m;
        printf("Enter value in feet:");
        scanf("%f",&ft);
        m=ft/3.28;
        printf("Value in meter: %lf\n",m);
}
int meter_to_feet(float a,float b){
        double ft,m;
        printf("Enter value in meter:");
        scanf("%f",&m);
        ft=3.28*m;
        printf("Value in feet: %lf\n",ft);
}
int yard_to_meter(float a,float b){
        double y,m;
        printf("Enter value in yard:");
        scanf("%f",&y);
        m=0.914*y;
        printf("Value in meter: %lf\n",m);
}
int meter_to_yard(float a,float b){
        double y,m;
        printf("Enter value in meter:");
        scanf("%f",&m);
        y=m/0.914;
        printf("Value in yard: %lf\n",y);
}
int mile_to_kilometer(float a,float b){
        double mile,km;
        printf("Enter value in mile:");
        scanf("%f",&mile);
        km=mile/1.62;
        printf("Value in kilometer: %lf",km);
}
int kilometer_to_mile(float a,float b){
        double mile,km;
        printf("Enter value in kilometer:");
        scanf("%f",&km);
        mile=1.62*km;
        printf("Value in mile: %lf",mile);
}
int nautical_mile_to_meter(float a,float b){
        double nm,m;
        printf("Enter value in nautical mile:");
        scanf("%f",&nm);
        m=nm*1852;
        printf("value in meter: %lf",m);
}
int meter_to_nautical_mile(float a,float b){
        double nm,m;
        printf("Enter value in meter:");
        scanf("%f",&m);
        nm=m/1852;
        printf("value in nautical mile: %lf",nm);
}
int acre_to_pow_meter(float a,float b){
        double ac,m2;
        printf("Enter value in acre:");
        scanf("%f",&ac);
        m2=4046.86*ac;
        printf("Value in meter^2: %lf",m2);
}
int pow_meter_to_acre(float a,float b){
        double ac,m2;
        printf("Enter value in meter^2:");
        scanf("%f",&m2);
        ac=m2/4046.86;
        printf("Value in meter^2: %lf",ac);
}
int parsec_to_kilometer(float a,float b){
        double pc,km;
        printf("Enter value in parsec:");
        scanf("%e",&pc);
        km=(3.086e13)*pc;
        printf("Value in kilometer: %e",km);
}
int kilometer_to_parsec(float a,float b){
        double pc,km;
        printf("Enter value in kilometer:");
        scanf("%e",&km);
        pc=km/(3.086e13);
        printf("Value in parsec: %e",pc);
}
int ounces_to_grams(float a,float b){
        double o,gm;
        printf("Enter value in ounces:");
        scanf("%f",&o);
        gm=o/28.35;
        printf("Value in gram: %lf",gm);
}
int grams_to_ounces(float a,float b){
        double o,gm;
        printf("Enter value in gram:");
        scanf("%f",&gm);
        o=gm*28.35;
        printf("Value in ounce: %lf",o);
}
int pound_to_kg(float a,float b){
        double kg,pd;
        printf("Enter value in pound:");
        scanf("%f",&pd);
        kg=pd/2.2;
        printf("Value in kg: %lf",kg);

}
int kg_to_pound(float a,float b){
        double kg,pd;
        printf("Enter value in kg:");
        scanf("%f",&kg);
        pd=kg*2.2;
        printf("Value in pound: %lf",pd);
}
int atom_to_pascal(float a,float b){
        double at,pa;
        printf("Enter value in atom:");
        scanf("%f",&at);
        pa=at*101325;
        printf("Value in pascal: %lf",pa);
}
int pascal_to_atom(float a,float b){
        double at,pa;
        printf("Enter value in pascal:");
        scanf("%f",&pa);
        at=pa/101325;
        printf("Value in atom: %lf",at);
}
int mmHg_to_pascal(float a,float b){
        double mh,pa;
        printf("Enter value in mmHg:");
        scanf("%f",&mh);
        pa=mh*133.33;
        printf("Value in pascal: %lf",pa);
}
int pascal_to_mmHg(float a,float b){
        double mh,pa;
        printf("Enter value in pascal:");
        scanf("%f",&pa);
        mh=pa/133.33;
        printf("Value in mmHg: %lf",mh);
}
int horsepower_to_kilowatts(float a,float b){
        double hp,kw;
        printf("Enter value in horsepower:");
        scanf("%f",&hp);
        kw=hp*0.746;
        printf("Value in kilowatts: %lf",kw);

}
int kilowatts_to_horsepower(float a,float b){
        double hp,kw;
        printf("Enter value in kilowatts:");
        scanf("%f",&kw);
        hp=kw/0.746;
        printf("Value in horsepower: %lf",hp);
}
int kilogram_force_meter_to_joule(float a,float b){
        double kfm,j;
        printf("Enter value in kilogram-force meter:");
        scanf("%f",&kfm);
        j=9.8*kfm;
        printf("Value in joule: %lf",j);
}
int joule_to_kilogram_force_meter(float a,float b){
        double kfm,j;
        printf("Enter value in joule:");
        scanf("%f",&j);
        kfm=j/9.8;
        printf("Value in kilogram-force meter: %lf",kfm);
}
int Fahrenheit_to_Celsius(float a,float b){
        double F,C;
        printf("Enter value in Fahrenheit:");
        scanf("%f",&F);
        C=(F-32)*(5/9);
        printf("Value in Celsius: %lf",C);
}
int Celsius_to_Fahrenheit(float a,float b){
        double F,C;
        printf("Enter value in Celsius:");
        scanf("%f",&C);
        F = 9/5*C + 32;
        printf("Value in Fahrenheit: %lf",F);
}
