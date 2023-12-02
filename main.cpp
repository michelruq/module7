#include <iostream>
#include "intarray.h"
#include "derivedexception.h"

int main(int argc, char* argv[])
{
	try
	{
		IntArray oIntArray(-1);
	}
	catch (DerivedException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}
	catch (BaseException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}

	try
	{
		IntArray oIntArray(10);
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			oIntArray[i] = i + int{ 1 };
		}
		int temp = oIntArray[5];
		std::cout << "here we get the element number 5 succesfully" << temp << std::endl;
		oIntArray.resize(2);
		temp = oIntArray[5];
	}
	catch (DerivedException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}
	catch (BaseException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}

	try
	{
		IntArray oIntArray(10);
		std::cout << "original size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			oIntArray[i] = i + int{ 1 };
		}
		oIntArray.insertBefore(5, 3);
		std::cout << "changed size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			if (i == 3)
			{
				std::cout << "here we add the element number 3 succesfully" << std::endl;
			}
			std::cout << i << " " << oIntArray[i] << std::endl;
		}
		oIntArray.resize(2);
		oIntArray.insertBefore(5, 3);
	}
	catch (DerivedException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}
	catch (BaseException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}

	try
	{
		IntArray oIntArray(10);
		std::cout << "original size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			oIntArray[i] = i + int{ 1 };
		}
		oIntArray.remove(3);
		std::cout << "changed size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			if (i == 3)
			{
				std::cout << "here we remove the element number 3 succesfully" << std::endl;
			}
			std::cout << i << " " << oIntArray[i] << std::endl;
		}
		oIntArray.resize(2);
		oIntArray.remove(3);
	}
	catch (DerivedException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}
	catch (BaseException& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << e.getInfo() << std::endl;
	}

	{
		IntArray oIntArray(10);
		std::cout << "original size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			oIntArray[i] = i + int{ 1 };
		}
		oIntArray.insertAtEnd(100);
		std::cout << "changed size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			if (i == oIntArray.getLength() - int{ 1 })
			{
				std::cout << "here we add the element succesfully" << std::endl;
			}
			std::cout << i << " " << oIntArray[i] << std::endl;
		}
	}

	{
		IntArray oIntArray(10);
		std::cout << "original size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			oIntArray[i] = i + int{ 1 };
		}
		oIntArray.insertAtBeginning(100);
		std::cout << "changed size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			if (i == 0)
			{
				std::cout << "here we add the element succesfully" << std::endl;
			}
			std::cout << i << " " << oIntArray[i] << std::endl;
		}
	}

	{
		IntArray oIntArray(10);
		std::cout << "original size is equal to " << oIntArray.getLength() << std::endl;
		for (auto i{ 0 }; i < oIntArray.getLength(); ++i)
		{
			oIntArray[i] = i + int{ 1 };
		}
		int index = oIntArray.getLength();
		if (oIntArray.getIndexOfElement(5, index))
		{
			std::cout << "the index value 5 in container is " << index << std::endl;
		}
		else
		{
			std::cout << "there isn't value 5 in container" << std::endl;
		}
	}

	return 0;
}