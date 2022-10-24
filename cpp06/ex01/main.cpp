#include "header.hpp"
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

int	main()
{
	Data		*p_data = new Data;
	uintptr_t	ptr;

	p_data->data = "Data!";

    std::cout << "ptr data: " << p_data << std::endl;
    std::cout << "receive data: " << p_data->data << std::endl;

	ptr = serialize(p_data);
	std::cout << "ptr uintptr_t --> " << ptr << std::endl;

	Data        *receive_data;
	receive_data = deserialize(ptr);
	std::cout << "ptr of receive data: " << receive_data << std::endl;
	std::cout << "receive data: " << receive_data->data << std::endl;


    std::cout << std::endl << "Is data the same: " << std::boolalpha \
        << (p_data->data.compare(receive_data->data) == 0) << std::endl;
    delete p_data;
	return (0);
}
