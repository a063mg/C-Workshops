#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::string join(std::vector<std::string> tokens, char delimiter){
    std::string str;

    str = "";

    int n = tokens.size();

    for (int i = 0; i<n; i++){
        str += tokens[i];
        if (i != n-1){
            str += delimiter;
        }
    }

    return str;
}

std::vector<std::string> split(std::string str, char delimiter){
    std::string vector; 
    std::vector<std::string> lst;
    lst.clear();

    int i = 0;

    vector = "";

    while (str[i] != '\0'){
        if (str[i] == delimiter){
            lst.push_back(vector);
            vector = "";
        }
        else{
            vector += str[i];
        }
        i++;
    }
    lst.push_back(vector);
    i = 0;

    return lst;

}


int main (int argc, char **argv)
{
    std::ifstream input;
    std::ofstream output;
    std::string line;

    input.open(argv[1]);
    output.open(argv[2]);

    int columns[argc-3];

    for (int i = 3; i < argc; ++i)
    {
      columns[i-3] = atoi(argv[i])-1;
    }


  while (!input.eof() && input.good()) //in.eof() - end of file.
  {
    std::getline (input, line);

    std::vector<std::string> values, output_values;
    std::string token;

    values = split(line, ',');   //get values from current line

    token = "";

    for(const int &column: columns){       //run through columns
          token = values[column];
          output_values.push_back(token); //add value[i] to line
    }

    output<<join(output_values, ',')<<"\n"; //write line in output file

  }

  input.close();
  output.close();
}