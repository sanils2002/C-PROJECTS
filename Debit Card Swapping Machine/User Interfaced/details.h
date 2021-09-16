
void transaction(char pin1[], char pin2[], float amt, float savbal, float currbal, unsigned short a, char ch);
/**
 The function to initialize transaction with variables
 **/

void prt_cmd(char ch);
/**
 The function for printing receipt
 **/

void print_successful();
/**
 The function for successful transaction
 **/

void print_declined();
/**
 The function for failed transaction
 **/

void invalid_selection();
/**
 The function for invalid selection
 **/

void receipt_printed();
/**
 The function for printing receipt
 **/

void thank_you();
/**
 The function for end of process
 **/
