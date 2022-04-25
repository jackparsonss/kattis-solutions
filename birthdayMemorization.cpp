#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

struct person {
	std::string name;
	int val;
};

bool my_compare(std::string a, std::string b)
{
    // Check if a string is present as
    // prefix in another string, then
    // compare the size of the string
    // and return the larger size
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
 
    // Else return lexicographically
    // smallest string
    else
        return a < b;
}

int main() {
	int n;
	std::unordered_map<std::string, person> bdays;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		int value;
		std::string bday, name;
		std::cin >> name >> value >> bday;
		person p = bdays[bday];

		if(p.val && p.val < value){
			person new_p;	
			new_p.name = name;
			new_p.val = value;
			bdays[bday] = new_p;
		} else if(!p.val){
			person new_p;
			new_p.name = name;
			new_p.val = value;
			bdays[bday] = new_p;
		}
	}

	int count = bdays.size();
	std::cout << count << std::endl;
	std::string names[count];
	int i = 0;
	for (auto const& [key, val] : bdays)
	{
	    // std::cout << val.name << std::endl;  
	    names[i] = val.name;
	    i++;
	}

	sort(names, names+count, my_compare);
	for(int i = 0; i < count; i++){
		std::cout << names[i] << std::endl;
	}
}
