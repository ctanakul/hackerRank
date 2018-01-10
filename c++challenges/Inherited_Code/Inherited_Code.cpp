/* Define the exception here */
class BadLengthException : public exception
{
    private:
        int num;
    public:
        BadLengthException(int n): num(n) {}
        std::string what() throw() {
            return std::to_string(num);
            
        }
};
