
//int array with a length of 5
//cannot change size
//each entry is empty
int tempsArray[5];

//int array with a length of 5
//each element is 0
int tempsArray2[5] = {0};

//int array with a length of 5
//each element is defined initially
int tempsArray3[5] = { 1, 2, 3, 4, 5};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Serial.println(tempsArray3);
  //causes error

  //print fristr element
  Serial.println(tempsArray3[0]);
  tempsArray3[0] = 33; 
  Serial.println(tempsArray3[0]);

  // fill array
  //(sizeof(tempsArray) / sizeof(tempsArray[0])) says how long array is
  //sizeof() returns total bits
  Serial.println("filling temps array");
  for(int x = 0; x < (sizeof(tempsArray) / sizeof(tempsArray[0])); x++){
    tempsArray[x] = x*5;
  }

  //print array
  Serial.println("printing temps array");
  for(int x = 0; x < (sizeof(tempsArray) / sizeof(tempsArray[0])); x++){
      Serial.println(tempsArray[x]);

  }


}

void loop() {
  // put your main code here, to run repeatedly:

}
