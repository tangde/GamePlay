#pragma once

#include "CommandPool.h"
#import <MetalKit/MetalKit.h>

namespace gameplay
{

/**
 * Metal impl of a CommandPool.
 */
class CommandPoolMTL : public CommandPool
{
public:

    /**
     * Constructor.
     */
	CommandPoolMTL();

    /**
     * Constructor.
     */
    CommandPoolMTL(id<MTLDevice> device);

    /**
	 * Destructor.
     */
    ~CommandPoolMTL();

	id<MTLDevice>  _device;
};

}
