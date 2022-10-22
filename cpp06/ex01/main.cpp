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
	Data		*p_data = new data;
	uintptr_t	ptr;

	p_data->data = "Data!";
	ptr = serialize(p_data);
	std::cout << "ptr uintptr_t --> " << ptr << std::endl;

	Data		*receive_data;
	receive_data = deserialize(ptr);
	std::cout << "ptr of receive data: " << reseive_data << std::endl;
	std::cout << "receive data: " << p_data->data << std::endl;
	return (0);
}
