/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassLibraryFilter : NSObject {
    NSXPCConnection * _connection;
    PKEntitlementWhitelist * _whitelist;
}

@property (readonly) BOOL allowsSilentAdd;
@property (retain) NSXPCConnection *connection;
@property (retain) PKEntitlementWhitelist *whitelist;

- (void).cxx_destruct;
- (BOOL)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2;
- (BOOL)allowAccessToPass:(id)arg1;
- (BOOL)allowsSilentAdd;
- (id)connection;
- (id)filterPassIfNeeded:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setWhitelist:(id)arg1;
- (id)whitelist;

@end
