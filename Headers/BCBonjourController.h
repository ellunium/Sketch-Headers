#import "NSObject.h"

@class BCBonjourBrowser, NSArray, NSMutableSet;

@interface BCBonjourController : NSObject
{
    NSArray *_clients;
    CDUnknownBlockType _handler;
    unsigned long long _index;
    BCBonjourBrowser *_browser;
    NSMutableSet *_autoConnectClients;
}

@property(retain, nonatomic) NSMutableSet *autoConnectClients; // @synthesize autoConnectClients=_autoConnectClients;
@property(retain, nonatomic) BCBonjourBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)shouldAutoConnect:(BOOL)arg1 forClient:(id)arg2;
- (BOOL)shouldAutoConnectClient:(id)arg1;
- (unsigned long long)indexOfClientWithName:(id)arg1;
- (void)removeClientForService:(id)arg1;
- (void)addClientWithIP:(id)arg1 port:(int)arg2;
- (id)addClientForService:(id)arg1;
- (void)removeObjectFromClientsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inClientsAtIndex:(unsigned long long)arg2;
- (void)broadcastMessage:(id)arg1;
- (BOOL)hasConnections;
@property(readonly, nonatomic) NSArray *availableClients;
@property(readonly, nonatomic) NSArray *connectedClients;
- (void)foundClientWithService:(id)arg1 forceAutoConnect:(BOOL)arg2;
- (void)cleanup;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

