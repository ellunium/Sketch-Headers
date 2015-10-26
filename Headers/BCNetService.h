#import "BCNetworkService.h"

#import "NSNetServiceDelegate.h"

@class NSNetService, NSString;

@interface BCNetService : BCNetworkService <NSNetServiceDelegate>
{
    NSNetService *_netService;
}

@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)updateInfo:(id)arg1;
- (id)addresses;
- (void)startService;
- (void)stopService;
- (id)name;
- (id)initWithNetService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

