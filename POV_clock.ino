/*CREATED BY - SHREYAN SADH
  DATE - 30/07/2017 */


int delayTime = 1;
int charBreak = 2;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;

int hr=0;
int mi=0;
int sec=0;

char clk[20];

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1  = 0;
  noInterrupts(); 
  OCR1A = 62500;          
  TCCR1B = 0x0C;
  TIMSK1 |= 1<<OCIE1A;
  interrupts();
}

int a[] = {1, 6, 26, 6, 1};
int b[] = {31, 21, 21, 10, 0};
int c2[] = {14, 17, 17, 10, 0};
int d[] = {31, 17, 17, 14, 0};
int e[] = {31, 21, 21, 17, 0};
int f[] = {31, 20, 20, 16, 0};
int g[] = {14, 17, 19, 10, 0};
int h[] = {31, 4, 4, 4, 31};
int i[] = {0, 17, 31, 17, 0};
int j[] = {0, 17, 30, 16, 0};
int k[] = {31, 4, 10, 17, 0};
int l[] = {31, 1, 1, 1, 0};
int m[] = {31, 12, 3, 12, 31};
int n[] = {31, 8, 4, 2, 31};
int o[] = {14, 17, 17, 14, 0};
int p[] = {31, 20, 20, 8, 0};
int q[] = {14, 17, 19, 14, 2};
int r[] = {31, 20, 22, 9, 0};
//int s[] = {8, 21, 21, 2, 0};
int s[] = {9, 21, 21, 21, 18};
int t[] = {16, 16, 31, 16, 16};
int u[] = {30, 1, 1, 30, 0};
int v[] = {24, 6, 1, 6, 24};
int w[] = {28, 3, 12, 3, 28};
int x[] = {17, 10, 4, 10, 17};
int y[] = {17, 10, 4, 8, 16};
int z[] = {19, 21, 21, 25, 0};

int zero[] = {31,17,17,17,31};
int one[] = {5,9,31,1,0};
int two[] = {9,19,21,9,0};
int three[] = {0,17,21,21,10};
int four[] = {2,6,10,31,2};
int five[] = {29,21,21,21,18};
int six[] = {31,21,21,21,23};
int seven[]= {17,18,20,24,16};
int eight[] = {10,21,21,21,10};
int nine[] = {28,20,20,20,31};

int eos[] = {0, 1, 0, 0, 0};
int excl[] = {0, 29, 0, 0, 0};
int ques[] = {8, 19, 20, 8, 0};
int colon[] = {0,0,10,0,0};

void displayLine(int line)
{
  int myline;
  myline = line;
if (myline>=16) 
{
  digitalWrite(LED1, HIGH); 
  myline-=16;
  }
  else 
  {
    digitalWrite(LED1, LOW);
    }
if (myline>=8)  
    {
      digitalWrite(LED2, HIGH); 
      myline-=8;
      }
      else {digitalWrite(LED2, LOW);
      }
if (myline>=4)
      {
        digitalWrite(LED3, HIGH); 
        myline-=4;
        } 
        else 
        {
          digitalWrite(LED3, LOW);
        }
if (myline>=2)  
      {
        digitalWrite(LED4, HIGH); 
        myline-=2;
        } 
        else 
        {
          digitalWrite(LED4, LOW);
        }
if (myline>=1)
      {
        digitalWrite(LED5, HIGH);
        myline-=1;
        }
        else 
        {
          digitalWrite(LED5, LOW);
        }
}

void displayChar(char c)
{
if (c == 'a')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(a[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'b')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(b[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'c')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(c2[i]);
    delay(delayTime);
}
displayLine(0);
}
if (c == 'd')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(d[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'e')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(e[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'f')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(f[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'g')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(g[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'h')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(h[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'i')
{
  for (int it = 0; it <5; it++)
  {
    displayLine(i[it]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'j')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(j[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'k')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(k[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'l')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(l[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'm')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(m[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'n')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(n[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'o')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(o[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'p')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(p[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'q')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(q[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'r')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(r[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 's')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(s[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 't')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(t[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'u')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(u[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'v')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(v[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'w')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(w[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'x')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(x[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'y')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(y[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == 'z')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(z[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '!')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(excl[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '?')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(ques[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '.')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(eos[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == ':')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(colon[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '0')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(zero[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '1')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(one[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '2')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(two[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '3')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(three[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '4')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(four[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '5')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(five[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '6')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(six[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '7')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(seven[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '8')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(eight[i]);
    delay(delayTime);
  }
  displayLine(0);
}
if (c == '9')
{
  for (int i = 0; i <5; i++)
  {
    displayLine(nine[i]);
    delay(delayTime);
  }
  displayLine(0);
}
delay(charBreak);
}

void displayString(char* s)
{
for (int i = 0; i<=strlen(s); i++)
{
displayChar(s[i]);
}
}

void loop()
{
  clocktime();
  displayString(clk);
  delay(100);
}

void clocktime()
{
  while(1)
  {
    if(sec==60)
    {
      sec=0;
      mi++;
      if(mi==60)
      {
        mi=0;
        hr++;
      }
    }
    sprintf(clk,"%02d:%02d:%02d",hr,mi,sec);
    return;
  } 
}

ISR(TIMER1_COMPA_vect)
{
  sec++;
}
