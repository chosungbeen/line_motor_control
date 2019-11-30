extern volatile unsigned long timer0_millis; //타이머변수
unsigned long timeVal; //이전시간
unsigned long readTime; //현재타이머시간
int motor1 = 13; //하강모터
int motor2 = 11; //분쇄모터
int motor3 = 9; //압착모터

//1cycle/min
//1분당 14 2.142857
//1분당 10 3
//1분당 18 1.666666666666667
//1분당 9  3.333333333333334
//1분당 12 2.5
//1분당 15 2

void setup(){
  Serial.begin(9600);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
}

void loop(){
  if(millis()-timeVal>=100){ //1초 단위 출력
     readTime = millis()/1000;
      Serial.println(readTime);
     if(millis()>=86400000){
       timer0_millis=0;
     }
  }
  /*
  리니어모터
  10 사이클 60초
  1  사이클 6초
  1/2사이클 3초
  
*/
  if(sw = HIGH){
    
    switch(readTime){
      case 0: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 1: //모터1 동작 down
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 2: //모터1 동작 down
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 3: //모터1 동작 down
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 4: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 5: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 6: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 7: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 8: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 9: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 10: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 11: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 12: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 13: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 14: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 15: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 16: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 17: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 18: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 19: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 20: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 21: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 22: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 23: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 24: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 25: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 26: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 27: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 28: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 29: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 30: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 31: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 32: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 33: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 34: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 35: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 36: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      case 37: //모터2 동작 회전
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      break;
      
      case 38: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 39: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 40: //모터1 동작 up
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 41: //모터1 동작 up
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 42: //모터1 동작 up
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 43: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 44: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 45: //모터3 동작 go
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      break;
      case 46: //모터3 동작 go
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      break;
      case 47: //모터3 동작 go
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      break;
     
      case 48: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      case 49: //정지
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
      
      case 50: //모터3 동작 back
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      break;
      case 51: //모터3 동작 back
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      break;
      case 52: //모터3 동작 back
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      break;
      
       case 53: //딜레이
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
       case 54: //딜레이
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      break;
  }
  }else{
    
    
  }
}
