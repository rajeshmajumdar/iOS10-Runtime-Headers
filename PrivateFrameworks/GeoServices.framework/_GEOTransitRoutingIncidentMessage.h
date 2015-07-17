/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage> {
    NSString * _affectedEntityName;
    GEOPBTransitRoutingIncidentMessage * _routingIncidentMessage;
    NSArray * _transitIncidents;
}

@property (nonatomic, readonly) NSString *affectedEntityName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *routingMessage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *transitIncidents;

- (id)_fakeTransitLineIncidentInLine:(id)arg1;
- (id)_lookupArrayForAffectedEntityType:(int)arg1 decoderData:(id)arg2;
- (void)_populateSecondaryMessageWithDecoderData:(id)arg1;
- (void)_populateTransitIncidentsWithDecoderData:(id)arg1;
- (id)affectedEntityName;
- (void)dealloc;
- (unsigned int)hash;
- (id)initFakeLineIncidentMessageInLine:(id)arg1;
- (id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)routingMessage;
- (id)transitIncidents;

@end
