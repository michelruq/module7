#pragma once

//The original IntArray comes from https://www.learncpp.com/cpp-tutorial/container-classes/
//This class has been modified for addition "bool getIndexOfElement(int value, int& index);"

class IntArray
{
private:
    int m_length{};
    int* m_data{};

    void erase();
    void reallocate(int newLength);

public:
    IntArray() = default;
    //create container
    IntArray(int length);
    IntArray(const IntArray& a);

    //copy container
    IntArray& operator=(const IntArray& a);

    //get access to any element of container
    int& operator[](int index);

    //change container's size
    void resize(int newLength);

    //add element into container
    void insertBefore(int value, int index);

    //remove element into container
    void remove(int index);

    //insert at the end
    void insertAtEnd(int value);

    //insert at the beginning
    void insertAtBeginning(int value);

    //find out index of value in container
    bool getIndexOfElement(int value, int& index);

    //very useful for doing with object
    int getLength() const;

    //destroy object
    ~IntArray();

};
