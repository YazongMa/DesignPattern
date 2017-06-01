#pragma once

template <class T>
class AutoPtr
{
public:
	explicit AutoPtr(T* ptr_ = NULL)
	:
	ptr(ptr_)
	{
	}

	AutoPtr(AutoPtr<T>& r)
	:
	ptr(r.release())
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

	AutoPtr<T>& operator=(AutoPtr<T>& r)
	{
		reset(r.release());
		return *this;
	}

	T* release()
	{
		T* tmp = ptr;
		ptr = NULL;
		return tmp;
	}

	void reset(T* ptr_ = NULL)
	{
		if (ptr != ptr_)
			delete ptr;
		ptr = ptr_;
	}

private:
	T*		ptr;
	int		ref;
};

