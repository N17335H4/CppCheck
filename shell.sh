#Fedora: Install CppCheck
sudo yum install CppCheck

#Print all checked errors of file "main.cpp"
cppcheck --enable=all main.cpp

#To get list of checks
cppcheck --doc

#To get list of error messages
cppcheck --errorlist