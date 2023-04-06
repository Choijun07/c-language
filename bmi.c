

int main() {

float height = 171.6;
float weight = 63.4;
float bmi = 0;
height = height * 0.01; //cm -> m 변환
bmi = weight / (height * height);
printf("당신의 BMI : %.2f\n", bmi);
return 0;
}