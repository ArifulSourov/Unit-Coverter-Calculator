#include <stdio.h>
#include <math.h>

double inch_to_centimeter(float,float);
double centimeter_to_inch(float,float);
double feet_to_meter(float,float);
double meter_to_feet(float,float);
double yard_to_meter(float,float);
double meter_to_yard(float,float);
double mile_to_kilometer(float,float);
double kilometer_to_mile(float,float);
double nautical_mile_to_meter(float,float);
double meter_to_nauticalmile(float,float);
double acre_to_metersquare(float,float);
double metersquare_to_acre(float,float);
double parsec_to_kilometer(float,float);
double kilometer_to_parsec(float,float);
double ounce_to_gram(float,float);
double gram_to_ounce(float,float);
double pound_to_kg(float,float);
double kg_to_pound(float,float);
double atom_to_pascal(float,float);
double pascal_to_atom(float,float);
double mmHg_to_pascal(float,float);
double pascal_to_mmHg(float,float);
double horsepower_to_kilowat(float,float);
double kilowat_to_horsepower(float,float);
double kilogram_forcemeter_to_joule(float,float);
double joule_to_kilogram_forcemeter(float,float);
double fahrenheit_to_celcious(float,float);
double celcious_to_fahrenheit(float,float);
double joule_to_calorie(float,float);
double calorie_to_joule(float,float);
double decimal_to_binary(int,int,int);
int TB_to_GB(int,int);


int main(){
    int n,a,b,c;
    while(1){
    printf("\n0.inch -> centimeter            ");
    printf("1.centimeter -> inch            \n");
    printf("2.feet -> meter                 ");
    printf("3.meter -> feet                 \n");
    printf("4.yard -> meter                 ");
    printf("5.meter -> yard                 \n");
    printf("6.mile -> kilometer             ");
    printf("7.kilometer -> mile             \n");
    printf("8.nautical mile -> meter        ");
    printf("9.meter -> nautical mile        \n");
    printf("10.acre -> meter^2              ");
    printf("11.meter^2 -> acre              \n");
    printf("12.parsec -> kilometer          ");
    printf("13.kilometer -> parsec          \n");
    printf("14.ounces -> grams              ");
    printf("15.grams -> ounces              \n");
    printf("16.pound -> kg                  ");
    printf("17.kg -> pound                  \n");
    printf("18.atom -> pascal               ");
    printf("19.pascal -> atom               \n");
    printf("20.mmHg -> pascal               ");
    printf("21.pascal -> mmHg               \n");
    printf("22.horsepower -> kilowatts      ");
    printf("23.kilowatts -> horsepower      \n");
    printf("24.kilogram-force meter -> joule");
    printf("25.joule -> kilogram-force meter\n");
    printf("26.Fahrenheit -> Celsius        ");
    printf("27.Celsius -> Fahrenheit        \n");
    printf("28.joule -> calorie             ");
    printf("29.calorie -> joule             \n");
    printf("30.decimal->binary              ");
    printf("31.Counting TB to MB            \n");
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
            meter_to_nauticalmile(a,b);
            break;
        case 10:
            printf("acre -> meter^2\n");
            acre_to_metersquare(a,b);
            break;
        case 11:
            printf("meter^2 -> acre\n");
            metersquare_to_acre(a,b);
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
            ounce_to_gram(a,b);
            break;
        case 15:
            printf("grams -> ounces\n");
            gram_to_ounce(a,b);
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
            pascal_to_mmHg(a,b);
            break;
        case 22:
            printf("horsepower -> kilowatts\n");
            horsepower_to_kilowat(a,b);
            break;
        case 23:
            printf("kilowatts -> horsepower\n");
            kilowat_to_horsepower(a,b);
            break;
        case 24:
            printf("kilogram-force meter -> joule\n");
            kilogram_forcemeter_to_joule(a,b);
            break;
        case 25:
            printf("joule -> kilogram-force meter\n");
            joule_to_kilogram_forcemeter(a,b);
            break;
        case 26:
            printf("Fahrenheit -> Celsius\n");
            fahrenheit_to_celcious(a,b);
            break;
        case 27:
            printf("Celsius -> Fahrenheit \n");
            celcious_to_fahrenheit(a,b);
            break;
        case 28:
            printf("joule -> calorie\n");
            joule_to_calorie(a,b);
            break;
        case 29:
            printf("calorie -> joule\n");
            calorie_to_joule(a,b);
            break;
        case 30:
            printf("decimal->binary\n");
            decimal_to_binary(a,b,c);
            break;
        case 31:
            printf("TB->GB\n");
            TB_to_GB(a,b);
            break;
        default:
            printf("INVALID INPUT");
            break;
        }
    }
    printf("\n\n");
}
double inch_to_centimeter(float a, float b){
        double in,cm;
        printf("enter value in inch:");
        scanf("%lf",&in);
        cm=2.54*in;
        printf("Value in centimeter: %.2lf\n",cm);
}
double centimeter_to_inch(float a, float b){
        double in,cm;
        printf("enter value in centimeter:");
        scanf("%lf",&cm);
        in=cm/2.54;
        printf("Value in inch: %lf\n",in);
}
double feet_to_meter(float a,float b){
        double ft,m;
        printf("Enter value in feet:");
        scanf("%lf",&ft);
        m=ft/3.28;
        printf("Value in meter: %lf\n",m);
}
double meter_to_feet(float a,float b){
        double ft,m;
        printf("Enter value in meter:");
        scanf("%lf",&m);
        ft=3.28*m;
        printf("Value in feet: %lf\n",ft);
}
double yard_to_meter(float a,float b){
        float y,m;
        printf("Enter value in yard:");
        scanf("%lf",&y);
        m=y/1.09;
        printf("Value in meter: %lf\n",m);
}
double meter_to_yard(float a,float b){
        float y,m;
        printf("Enter value in meter:");
        scanf("%lf",&m);
        y=1.09*m;
        printf("Value in yard: %lf\n",y);
}
double mile_to_kilometer(float a, float b){
        double mile,kilo;
        printf("Enter the distance in mile:");
        scanf("%lf",&mile);
        kilo = mile/1.61;
        printf("value is in killometer: %lf\n",kilo);

}
double kilometer_to_mile(float a, float b){
        double mile,killo;
        printf("Enter the distance in killometer:");
        scanf("%lf",&killo);
        mile = killo*1.61;
        printf("value is in mile: %lf\n",mile);
}
double nautical_mile_to_meter(float a,float b){
        double nmile,meter;
        printf("Enter the distance in mile:");
        scanf("%lf",&nmile);
        meter = nmile/1852;
        printf("value is in meter:%lf\n",meter);
}
double meter_to_nauticalmile(float a,float b){
        double nmile,meter;
        printf("Enter the distance in meter:");
        scanf("%lf",&meter);
        nmile = meter*1852;
        printf("value is in nmile:%lf\n",nmile);
}
double acre_to_metersquare(float a,float b){
        double acre,metersquare;
        printf("Enter the area:");
        scanf("%lf",&acre);
        metersquare = acre/4046.85642;
        printf("area is in metersquare: %lf\n",metersquare);
}
double metersquare_to_acre(float a,float b){
        double acre,metersquare;
        printf("Enter the area:");
        scanf("%lf",&metersquare);
        acre = metersquare*4046.85642;
        printf("area is in acre: %lf\n",acre);
}
double parsec_to_kilometer(float a,float b){
        double parsec,kilometer;
        printf("Enter the distance:");
        scanf("%lf",&parsec);
        kilometer = parsec/30856775813057.6;
        printf("the distance is:%lf\n",kilometer);

}double kilometer_to_parsec(float a,float b){
        double parsec,kilometer;
        printf("Enter the distance:");
        scanf("%lf",&kilometer);
        parsec = 30856775813057.6*kilometer;
        printf("the distance is:%lf\n",parsec);
}double ounce_to_gram(float a,float b){
        double ounce,gram;
        printf("Enter the weight is in ounce:");
        scanf("%lf",&ounce);
        gram = ounce/28.3495231;
        printf("the weight is in gram:%lf\n",gram);
}double gram_to_ounce(float a,float b){
        double ounce,gram;
        printf("Enter the weight is in gram:");
        scanf("%lf",&gram);
        ounce = gram*28.3495231;
        printf("the weight is in ounce:%lf\n",ounce);
}double pound_to_kg(float a,float b){
        double pound,kg;
        printf("Enter the weight is in pound:");
        scanf("%lf",&pound);
        kg = pound/0.45359237;
        printf("the weight is in kg:%lf\n",kg);
}double kg_to_pound(float a,float b){
        double pound,kg;
        printf("Enter the weight is in kg:");
        scanf("%lf",&kg);
        pound = kg*0.45359237;
        printf("the weight is in pound:%lf\n",pound);
}double atom_to_pascal(float a,float b){
        double atom,pascal;
        printf("Enter the pressure in atom:");
        scanf("%lf",&atom);
        pascal = atom/101325;
        printf("the pressure is in pascal:%lf\n",pascal);
}double pascal_to_atom(float a,float b){
        double atom,pascal;
        printf("Enter the pressure in pascal:");
        scanf("%lf",&pascal);
        atom = pascal*101325;
        printf("the pressure is in atom:%lf\n",atom);
}double mmHg_to_pascal(float a,float b){
        double mmHg,pascal;
        printf("Enter the pressure in mmHg:");
        scanf("%lf",&mmHg);
        pascal = mmHg/133.322368;
        printf("the pressure is in pascal:%lf\n",pascal);
}double pascal_to_mmHg(float a,float b){
        double mmHg,pascal;
        printf("Enter the pressure in pascal:");
        scanf("%lf",&pascal);
        mmHg = pascal*133.322368;
        printf("the pressure is in mmHg:%lf\n",mmHg);
}double horsepower_to_kilowat(float a,float b){
        double horsepower,kilowat;
        printf("Enter the power in horsepower:");
        scanf("%lf",&horsepower);
        kilowat = horsepower/ 0.745699872;
        printf("the power is in kilowat:%lf\n",kilowat);
}double kilowat_to_horsepower(float a,float b){
        double kilowat,horsepower;
        printf("Enter the power in kilowat:");
        scanf("%lf",&kilowat);
        horsepower = kilowat*0.745699872;
        printf("the power is in horespower:%lf\n",horsepower);
}double kilogram_forcemeter_to_joule(float a,float b){
        double kfm,joule;
        printf("Enter the power in kfm:");
        scanf("%lf",&kfm);
        joule = kfm/9.80665;
        printf("the power is in joule:%lf\n",joule);
}double joule_to_kilogram_forcemeter(float a,float b){
        double joule,kfm;
        printf("Enter the power in joule:");
        scanf("%lf",&joule);
        kfm = joule*9.80665;
        printf("the power is in kfm:%lf\n",kfm);
}double fahrenheit_to_celcious(float a,float b){
        double f,c;
        printf("Enter the temperature in fahrenheit:");
        scanf("%lf",&f);
        c = (((f-32)/9)*5);
        printf("the temperature is in celcious:%lf\n",c);
}double celcious_to_fahrenheit(float a,float b){
        double f,c;
        printf("Enter the temperature in celcious:");
        scanf("%lf",&c);
        f = (((9*c)/5)+32);
        printf("the temperature is in fahrenheit:%lf\n",f);
}double joule_to_calorie(float a,float b){
        double j,c;
        printf("Enter the temperature in joule:");
        scanf("%lf",&j);
        c = 4.2*j;
        printf("the temperature is in calorie:%lf\n",c);
}double calorie_to_joule(float a,float b){
        double j,c;
        printf("Enter the temperature in calorie:");
        scanf("%lf",&c);
        j = 4.2/c;
        printf("the temperature is in jule:%lf\n",j);
}double decimal_to_binary(int a,int b,int c)
{
    int decimal,rem,i;
    int binary[100];

    // Asking user the decimal number
    printf("Decimal number = ");
    scanf("%d",&decimal);
    // Initialize the array with anything other than 0 and 1
    for(i = 0; i < 100; i++){
        binary[i] = 2;
    }
    // Find the remainders and store them in the array
    for(i = 0; i < 100; i++){
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        if(decimal == 0) // Stop when decimal becomes 0
            break;
    }
    // Print the remainder in reverse order
    for(i = 99; i >= 0; i--){
        //Don't print anything other than 0s and 1s
        if(binary[i] == 0 || binary[i] == 1)
            printf("%d",binary[i]);

    }
}int TB_to_GB(int a,int b){

        int TB,GB;
        printf("Enter the seize:");
        scanf("%d",&GB);
        TB = GB*1024;
        printf(" TB =%d gigabyte \n",TB);




}







