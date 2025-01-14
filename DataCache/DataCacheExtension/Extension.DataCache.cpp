#include "pch.h"
#include "Extension.DataCache.h"

namespace winrt::Extension::implementation
{
    hstring DataCache::Value()
    {
        return this->value;
    }
    void DataCache::Value(hstring const& value)
    {
        this->value = value;
    }
}
