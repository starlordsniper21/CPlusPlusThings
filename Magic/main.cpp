#include<iostream>
#include<string>
using namespace std;

int main()
{
	string put;
	int x;
	
	cout<<"-----------:Enter Your Name And See Magic:-----------"<<endl<<endl;
	
	cin>>put;
	cout<<"Enter your Name:- "<<put<<"."<<endl;

	x=put.length();
	
	
	for(int b=0;b<x;b++){
		
		switch(put[b]){
			
		case 'a':
		case 'A':
		cout<<"..######..\n..#....#..\n..######..\n..#....#..\n..#....#..\n\n"<<endl;
		break;
		
		case 'b':
	    case 'B':
	    cout<<"..######..\n..#....#..\n..#####...\n..#....#..\n..######..\n\n"<<endl;
	    break;
	    
	    case 'c':
	    case 'C':
	    cout<<"..######..\n..#.......\n..#.......\n..#.......\n..######..\n\n"<<endl;
	    break;
	    
	    case 'd':
	    case 'D':
	    cout<<"..#####...\n..#....#..\n..#....#..\n..#....#..\n..#####...\n\n"<<endl;
	    break;
	    
	    case 'e':
	    case 'E':
	    cout<<"..######..\n..#.......\n..#####...\n..#.......\n..######..\n\n"<<endl;
	    break;
	    
	    case 'f':
	    case 'F':
	    cout<<"..######..\n..#.......\n..#####...\n..#.......\n..#.......\n\n"<<endl;
	    break;
	    
	    case 'g':
	    case 'G':
	    cout<<"..######..\n..#.......\n..#####...\n..#....#..\n..#####...\n\n"<<endl;
	    break;
	    
	    
	    case 'h':
	    case 'H':
	    cout<<"..#....#..\n..#....#..\n..######..\n..#....#..\n..#....#..\n\n"<<endl;
	    break;
	    
	    case 'i':
	    case 'I':
	    cout<<"..######..\n....##....\n....##....\n....##....\n..######..\n\n"<<endl;
	    break;
	    
	    case 'j':
	    case 'J':
	    cout<<"..######..\n....##....\n....##....\n..#.##....\n..####....\n\n"<<endl;
	    break;
	    
	    case 'k':
	    case 'K':
	    cout<<"..#....#..\n..#..#....\n..##......\n..#..#....\n..#....#..\n\n"<<endl;
	    break;
	    
	    case 'l':
	    case 'L':
	    cout<<"..#.......\n..#.......\n..#.......\n..#.......\n..######..\n\n"<<endl;
	    break;
	    
	    case 'm':
	    case 'M':
	    cout<<"..#....#..\n..##..##..\n..#.##.#..\n..#....#..\n..#....#..\n\n"<<endl;
	    break;
	    
	    case 'n':
	    case 'N':
	    cout<<"..#....#..\n..##...#..\n..#.#..#..\n..#..#.#..\n..#...##..\n\n"<<endl;
	    break;
	    
	    case 'o':
	    case 'O':
	    cout<<"..######..\n..#....#..\n..#....#..\n..#....#..\n..######..\n\n"<<endl;
	    break;
	    
	    case 'p':
	    case 'P':
	    cout<<"..######..\n..#....#..\n..######..\n..#.......\n..#.......\n\n"<<endl;
	    break;
	    
	    case 'q':
	    case 'Q':
	    cout<<"..######..\n..#....#..\n..#.#..#..\n..#..#.#..\n..######..\n\n"<<endl;
	    break;
	    
	    case 'r':
	    case 'R':
	    cout<<"..######..\n..#....#..\n..#.##...\n..#...#...\n..#....#..\n\n"<<endl;
	    break;
	    
	    case 's':
	    case 'S':
	    cout<<"..######..\n..#.......\n..######..\n.......#..\n..######..\n\n"<<endl;
	    break;
	    
	    case 't':
	    case 'T':
	    cout<<"..######..\n....##....\n....##....\n....##....\n....##....\n\n"<<endl;
	    break;
	    
	    case 'u':
	    case 'U':
	    cout<<"..#....#..\n..#....#..\n..#....#..\n..#....#..\n..######..\n\n"<<endl;
	    break;
	    
	    case 'v':
	    case 'V':
	    cout<<"..#....#..\n..#....#..\n..#....#..\n...#..#...\n....##....\n\n"<<endl;
	    break;
	    
	    
	    case 'w':
	    case 'W':
	    cout<<"..#....#..\n..#....#..\n..#.##.#..\n..##..##..\n..#....#..\n\n"<<endl;
	    break;
	    
	    case 'x':
	    case 'X':
	    cout<<"..#....#..\n...#..#...\n....##....\n...#..#...\n..#....#..\n\n"<<endl;
	    break;
	    
	    case 'y':
	    case 'Y':
	    cout<<"..#....#..\n...#..#...\n....##....\n....##....\n....##....\n\n"<<endl;
	    break;
	    
	    case 'z':
	    case 'Z':
	    cout<<"..######..\n......#...\n.....#....\n....#.....\n..######..\n\n"<<endl;
	    break;
	    
	    case '.':
	    cout<<"----..----\n\n"<<endl;
	    break;
		}
	}
	cout<<"Name length is:- "<<x<<endl;
	cout<<"_____________________________________________"<<endl<<endl;
	cout<<"Made By Michael Maliwat"<<endl;
}
