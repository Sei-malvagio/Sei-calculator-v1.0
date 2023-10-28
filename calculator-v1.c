#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#define SQUARE "\u221A"
#define SYM_PER  '/'
#define SYM_PANGKAT "^"
#define SYM_TIMES "\u00D7"

const char INP_NUMB[] = "\nPilih angka 1-", frequency;
char std_In[100];

int arithmetic(int chooseCalc, int arNumber, arNumber1) {
    int results;
    if(chooseCalc == 1) {
        results = arNumber + arNumber1;
        printf("\033[0;96m\033[1mJawaban: %d + %d = %d\n\033[0;97m", arNumber, arNumber1, results);
    } else if(chooseCalc == 2) {
        results = arNumber - arNumber1;
        printf("\033[0;96m\033[1mJawaban: %d - %d = %d\n\033[0;97m", arNumber, arNumber1, results);
    } else if(chooseCalc == 3) {
        results = arNumber * arNumber1;
        printf("\033[0;96m\033[1mJawaban: %d " SYM_TIMES " %d = %d\n\033[0;97m", arNumber, arNumber1, results);
    } else {
        printf("Error: Invalid case");
    }
}

double square(int chooseCalc, const double SQUARENUMBER, const double SQUARENUMBER1, const double SQUARENUMBER2, const double SQUARENUMBER3) {
    double results, results_;
    if(chooseCalc == 4) {
        results = SQUARENUMBER / SQUARENUMBER1;
        printf("\033[0;96m\033[1mJawaban: %.2lf : %.2lf = %.2lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, results);
    } else if(chooseCalc == 5) {
        double simplify = sqrt(SQUARENUMBER);
        results = simplify * simplify;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: "SQUARE"%.0lf = "SQUARE"%.0lf atau "SQUARE"%.2lf\n\033[0;97m", SQUARENUMBER, results, simplify);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 6) {
        results = SQUARENUMBER * sqrt(SQUARENUMBER1);
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: %.0lf"SQUARE"%.0lf = %.2lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, results);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 7) {
        results = sqrt(SQUARENUMBER) + sqrt(SQUARENUMBER);
        results_ = results - 1;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: "SQUARE"%.0lf + "SQUARE"%.0lf = %.3lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 8) {
        results = sqrt(SQUARENUMBER) + sqrt(SQUARENUMBER1);
        results_ = results - 1;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: "SQUARE"%.0lf + "SQUARE"%.0lf = %.3lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 9) {
        results = sqrt(SQUARENUMBER) + sqrt(SQUARENUMBER1) - sqrt(SQUARENUMBER2);
        results_ = results - 1;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: "SQUARE"%.0lf + "SQUARE"%.0lf - "SQUARE"%.0lf = %.2lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, SQUARENUMBER2, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 10) {
        results = sqrt(SQUARENUMBER) - sqrt(SQUARENUMBER1) + sqrt(SQUARENUMBER2) - sqrt(SQUARENUMBER3);
        results_ = results;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: "SQUARE"%.0lf - "SQUARE"%.0lf + "SQUARE"%.0lf - "SQUARE"%.0lf = %.2lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, SQUARENUMBER2, SQUARENUMBER3, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 11) {
        results = sqrt(SQUARENUMBER) * sqrt(SQUARENUMBER1);
        results_ = results * results;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: "SQUARE"%.0lf "SYM_TIMES" "SQUARE"%.0lf = %.0lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, results_, results);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 12) {
        results = SQUARENUMBER * sqrt(SQUARENUMBER1) + SQUARENUMBER2 * sqrt(SQUARENUMBER3);
        results_ = results;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: %.0lf"SQUARE"%.0lf + %.0lf"SQUARE"%.0lf = %.2lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, SQUARENUMBER2, SQUARENUMBER3, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 13) {
        results = SQUARENUMBER * sqrt(SQUARENUMBER1) - SQUARENUMBER2 * sqrt(SQUARENUMBER3);
        results_ = results;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: %.0lf"SQUARE"%.0lf + %.0lf"SQUARE"%.0lf = %.2lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, SQUARENUMBER2, SQUARENUMBER3, results, results_);
        }
        else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 14) {
        results = SQUARENUMBER * SQUARENUMBER1 * sqrt(SQUARENUMBER2);
        results_ = results;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: %.0lf " SYM_TIMES " %.0lf"SQUARE"%.0lf = %.2lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, SQUARENUMBER2, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else if(chooseCalc == 15) {
        results = (sqrt(SQUARENUMBER) + sqrt(SQUARENUMBER1)) * (sqrt(SQUARENUMBER2) + sqrt(SQUARENUMBER3));
        results_ = results;
        if(results && results > 0) {
            printf("\033[0;96m\033[1mJawaban: ("SQUARE"%.0lf + "SQUARE"%.0lf) ("SQUARE"%.0lf + "SQUARE"%.0lf) = %.2lf\nDalam bilangan bulat: %.0lf\n\033[0;97m", SQUARENUMBER, SQUARENUMBER1, SQUARENUMBER2, SQUARENUMBER3, results, results_);
        } else {
            printf("\n\033[0;91mTidak ada penyederhanaan lebih lanjut yang bisa dilakukan dalam hal ini.\n\033[0;97m");
        }
    } else {
        printf("Error: Invalid case");
    }
}

double thePower(int chooseCalc, double theNumber, double powNumber) {
    double results;
    if(chooseCalc == 16) {
        results = pow(theNumber, powNumber);
        printf("\033[0;96m\033[1mJawaban: %.0lf"SYM_PANGKAT"%.0lf = %.2lf\n\033[0;97m", theNumber, powNumber, results);
    }
}

int isNan(char isItBro[], size_t frequency) {
    int chooseCalc = 0;
    char *convertToInts;
    printf("\033[0;93m%s%zu:\033[0;97m ", INP_NUMB, frequency);
    scanf("%s", std_In);
    while(true) {
        chooseCalc = strtol(isItBro, &convertToInts, 10);
        if(*convertToInts == '\0') {
            if(chooseCalc >= 1 && chooseCalc <= frequency) {
                return chooseCalc;
            } else {
                return chooseCalc;
            }
        } else {
            printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m");
            printf("\033[0;93m%s%zu:\033[0;97m ", INP_NUMB, frequency);
            scanf("%s", isItBro);
        }
    }
}

int main() {
    const char *menu_[] = {
        "a + b = ", "a - b = ",
        "a " SYM_TIMES " b = ",
        "a : b = ",
        SQUARE "a = ",
        "a" SQUARE "b = ",
        SQUARE "a + " SQUARE "a = ",
        SQUARE "a + " SQUARE "b = ",
        SQUARE "a + " SQUARE "b - " SQUARE "c = ",
        SQUARE "a - " SQUARE "b + " SQUARE "c - " SQUARE "e = ",
        SQUARE "a "SYM_TIMES " " SQUARE "b = ",
        "a" SQUARE "c + b" SQUARE "c = ",
        "a" SQUARE "c - b" SQUARE "c = ",
        "a "SYM_TIMES" b" SQUARE "c = ",
        "("SQUARE"a + "SQUARE"b) ("SQUARE"a + "SQUARE"b) = ",
        "a"SYM_PANGKAT"b = "

    };

    char *text;
    text = "\033[0;91m\033[1mWarning: \033[0;97mUntuk bilangan akar di kalkulator ini hanya menampilkan nilai numerik dan bilangan bulat saja.\n";
    for(int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        usleep(35);
    }
    sleep(1);
    
    char unLoop;
    while(unLoop != 'e') {
        text = "\033[0;93m\033[1m>>> MENU KALKULATOR <<<\033[0m\n";
        printf("\n%s\n", text);
        for(int i = 0; i < sizeof(menu_) / sizeof(menu_[0]); i++) {
            printf("\033[1m%2d. %-s\n", i + 1, menu_[i]);
        }

        int chooseCalc = 0;
        size_t frequency = sizeof(menu_) / sizeof(menu_[0]);
        chooseCalc = isNan(std_In, frequency);

        int number_one, number_two, results;
        double number_one_div, number_two_div, number_three_div,
               number_four_div, squareNumber1, squareNumber2,
               squareNumber3;

        switch(chooseCalc) {
        case 1:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%d", &number_one) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%d", &number_two) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            arithmetic(chooseCalc, number_one, number_two);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 2:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%d", &number_one) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%d", &number_two) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            arithmetic(chooseCalc, number_one, number_two);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 3:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%d", &number_one) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%d", &number_two) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            arithmetic(chooseCalc, number_one, number_two);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 4:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, squareNumber2, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 5:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar: ");
            while(scanf("%d", &number_one) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one, squareNumber1, squareNumber2, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 6:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInout angka");
                while(getchar() != '\n');
            }
            printf("Input akar: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, squareNumber2, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 7:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, squareNumber1, squareNumber2, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 8:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, squareNumber2, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 9:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            printf("Input akar 3: ");
            while(scanf("%lf", &number_three_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 3: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, number_three_div, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 10:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            printf("Input akar 3: ");
            while(scanf("%lf", &number_three_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 3: ");
                while(getchar() != '\n');
            }
            printf("Input akar 4: ");
            while(scanf("%lf", &number_four_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 4: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, number_three_div, number_four_div);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 11:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, squareNumber2, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 12:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 1: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 1: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%lf", &number_three_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            printf("Input akar: ");
            while(scanf("%lf", &number_four_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, number_three_div, number_four_div);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 13:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 1: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%lf", &number_three_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            printf("Input akar 2: ");
            while(scanf("%lf", &number_four_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, number_three_div, number_four_div);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 14:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 1: ");
                while(getchar() != '\n');
            }
            printf("Input angka 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka 2: ");
                while(getchar() != '\n');
            }
            printf("Input akar: ");
            while(scanf("%lf", &number_three_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, number_three_div, squareNumber3);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 15:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput akar 1: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 1: ");
                while(getchar() != '\n');
            }
            printf("Input akar 2: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 2: ");
                while(getchar() != '\n');
            }
            printf("Input akar 3: ");
            while(scanf("%lf", &number_three_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 3: ");
                while(getchar() != '\n');
            }
            printf("Input akar 4: ");
            while(scanf("%lf", &number_four_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput akar 4: ");
                while(getchar() != '\n');
            }
            square(chooseCalc, number_one_div, number_two_div, number_three_div, number_four_div);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        case 16:
            printf("\n\033[0;92m[!] Kamu memilih: %s\033[0;97m", menu_[chooseCalc - 1]);
            printf("\nInput angka: ");
            while(scanf("%lf", &number_one_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput angka: ");
                while(getchar() != '\n');
            }
            printf("Input pangkat: ");
            while(scanf("%lf", &number_two_div) != 1) {
                printf("\n\033[0;91m\033[1mHanya mendukung angka!\033[0;97m\nInput pangkat: ");
                while(getchar() != '\n');
            }
            thePower(chooseCalc, number_one_div, number_two_div);
            printf("\nPress any \033[0;92mkeys\033[0;97m to back, and press \033[0;91m\'e\'\033[0;97m for exit: ");
            scanf(" %c", &unLoop);
            break;
        default:
            printf("\n\033[0;91m\033[1mWarning: tolong masukkan 1-%zu angka saja!\033[0;37m\nTekan enter untuk melanjutkan.", frequency);
            getchar() != '\0';
        }
        while(getchar() != '\n');
    }
    //Kalkulator by jafar, btw program ended? huhh!
    return 0;
}