/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAggregateContactStore : CNContactStore {
    NSArray * _contactStores;
    CNContactStore * _mainStore;
}

@property (nonatomic, copy) NSArray *contactStores;
@property (nonatomic, readonly) CNContactStore *mainStore;

- (id)_allStoreResultsWithError:(id*)arg1 withBlock:(id /* block */)arg2;
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactStores;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultContainerIdentifier;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (id)groupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)iOSMapper;
- (id)initWithContactStores:(id)arg1;
- (id)mainStore;
- (id)meContactIdentifierWithError:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)originForSuggestion:(id)arg1 error:(id*)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)setContactStores:(id)arg1;
- (BOOL)store:(id)arg1 supportsSelector:(SEL)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end
