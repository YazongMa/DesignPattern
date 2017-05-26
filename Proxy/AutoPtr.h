#pragma once

template <class T>
class AutoPtr
{
public:
	AutoPtr()
	:
	ptr(new T)
	{
	}

	explicit AutoPtr(const AutoPtr<T>& r)
	:
	ptr(&*r)
	{
	}

	~AutoPtr()
	{
		delete ptr;
	}

	T& operator*() const
	{
		return *ptr;
	}

	T* operator->() const
	{
		return ptr;
	}

	AutoPtr<T>& operator=(const AutoPtr<T>& r)
	{
		if (this != *r)
		{
			delete ptr;
		}
		ptr = *r;

		return *this;
	}

private:
	T*		ptr;
	int		ref;
};

