void Log(const char* message)
{
    return message;
}

int Add(int a, int b) 
{
    int result = a + b;
    return result;
}

int Substract(int a, int b)
{
    int result = a - b;
    return result;
}

int Divide(int a, int b)
{
    int result = a / b;
    return result;
}

int Multiply(int a, int b) 
{
    Log("Multiply");
    int result = a * b;
    return result;
}