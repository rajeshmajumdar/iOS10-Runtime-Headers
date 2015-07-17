/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewNotRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {
    id /* block */  _addInviteesTapped;
    NSOperationQueue * _availabilityRequestsQueue;
    NSString * _cachedAddInviteeCellReuseIdentifier;
    NSString * _cachedInviteeCellReuseIdentifier;
    BOOL  _canSeeAttendeeStatuses;
    BOOL  _editable;
    EKEvent * _event;
    NSMutableSet * _participantAddressesForInFlightAvailabilityOperations;
    NSMutableDictionary * _participantAddressesToAvailabilityType;
    NSMutableDictionary * _participantAddressesToParticipantIndex;
    id /* block */  _participantRemoved;
    id /* block */  _participantTapped;
    NSMutableArray * _participants;
    unsigned int  _reuseIdentifierVersion;
    id /* block */  _tableViewCellHook;
}

@property (nonatomic, copy) id /* block */ addInviteesTapped;
@property (nonatomic, retain) NSOperationQueue *availabilityRequestsQueue;
@property (nonatomic, retain) NSString *cachedAddInviteeCellReuseIdentifier;
@property (nonatomic, retain) NSString *cachedInviteeCellReuseIdentifier;
@property (nonatomic) BOOL canSeeAttendeeStatuses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editable;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableSet *participantAddressesForInFlightAvailabilityOperations;
@property (nonatomic, retain) NSMutableDictionary *participantAddressesToAvailabilityType;
@property (nonatomic, retain) NSMutableDictionary *participantAddressesToParticipantIndex;
@property (nonatomic, copy) id /* block */ participantRemoved;
@property (nonatomic, copy) id /* block */ participantTapped;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic) unsigned int reuseIdentifierVersion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;

+ (id)_participantAddressForParticipant:(id)arg1;

- (void).cxx_destruct;
- (void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1;
- (BOOL)_isAddInviteesRow:(int)arg1;
- (BOOL)_isValidRow:(int)arg1;
- (id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1;
- (id)_lookUpParticipantIndexForParticipantAddress:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg1;
- (void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg1;
- (void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1;
- (void)_removeParticipantAtIndexPath:(id)arg1;
- (void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2;
- (BOOL)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1;
- (void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2;
- (void)_updateCell:(id)arg1 forParticipantAtIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_updateCellForParticipantWithAddress:(id)arg1;
- (id /* block */)addInviteesTapped;
- (id)availabilityRequestsQueue;
- (id)cachedAddInviteeCellReuseIdentifier;
- (id)cachedInviteeCellReuseIdentifier;
- (BOOL)canEditRow:(id)arg1;
- (BOOL)canSeeAttendeeStatuses;
- (BOOL)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(int)arg1 forRow:(id)arg2;
- (void)dealloc;
- (id)debugTitle;
- (BOOL)editable;
- (int)editingStyleForRow:(id)arg1;
- (float)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (id)init;
- (unsigned int)numberOfRows;
- (id)participantAddressesForInFlightAvailabilityOperations;
- (id)participantAddressesToAvailabilityType;
- (id)participantAddressesToParticipantIndex;
- (id /* block */)participantRemoved;
- (id /* block */)participantTapped;
- (id)participants;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned int)reuseIdentifierVersion;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAddInviteesTapped:(id /* block */)arg1;
- (void)setAvailabilityRequestsQueue:(id)arg1;
- (void)setCachedAddInviteeCellReuseIdentifier:(id)arg1;
- (void)setCachedInviteeCellReuseIdentifier:(id)arg1;
- (void)setCanSeeAttendeeStatuses:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEvent:(id)arg1;
- (void)setParticipantAddressesForInFlightAvailabilityOperations:(id)arg1;
- (void)setParticipantAddressesToAvailabilityType:(id)arg1;
- (void)setParticipantAddressesToParticipantIndex:(id)arg1;
- (void)setParticipantRemoved:(id /* block */)arg1;
- (void)setParticipantTapped:(id /* block */)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned int)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (id /* block */)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(BOOL)arg2;

@end
