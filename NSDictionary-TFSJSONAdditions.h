//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TFSJSONAdditions)
- (long long)tfs_longLongIdentifierForNumericKey:(id)arg1 stringKey:(id)arg2;
- (id)tfs_dictionaryByRedactingKeys:(id)arg1;
- (_Bool)_tfs_boolForObject:(id)arg1 defaultValue:(_Bool)arg2;
- (id)tfs_objectForPathElementKeys:(id)arg1;
- (id)tfs_jsonCompliantDictionaryPreservingThriftCompatibleNumbers;
- (id)tfs_dictionaryByRemovingInvalidJSONEntries;
- (id)tfs_dictionaryByRemovingInvalidPropertyListEntries;
- (id)tfs_recursiveValueMap:(CDUnknownBlockType)arg1 keyMap:(CDUnknownBlockType)arg2 recurseOnKeys:(_Bool)arg3;
- (id)tfs_dictionaryByMappingValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)_tfs_dictionaryByMappingKeysWithBlock:(CDUnknownBlockType)arg1 valueMapBlock:(CDUnknownBlockType)arg2;
- (id)tfs_mapBlock:(CDUnknownBlockType)arg1;
- (id)tfs_dateFromTimeIntervalSince1970ForKey:(id)arg1 defaultValue:(id)arg2;
- (id)tfs_dateFromTimeIntervalSince1970ForKey:(id)arg1;
- (double)tfs_cgFloatForKey:(id)arg1 defaultValue:(double)arg2;
- (double)tfs_cgFloatForKey:(id)arg1;
- (double)tfs_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)tfs_doubleForKey:(id)arg1;
- (float)tfs_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)tfs_floatForKey:(id)arg1;
- (long long)tfs_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)tfs_longLongForKey:(id)arg1;
- (long long)tfs_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)tfs_integerForKey:(id)arg1;
- (int)tfs_intForKey:(id)arg1 defaultValue:(int)arg2;
- (int)tfs_intForKey:(id)arg1;
- (id)tfs_numberForKeyWithNumberFormatting:(id)arg1;
- (_Bool)tfs_boolForPathElementKeys:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)tfs_boolForPathElementKeys:(id)arg1;
- (_Bool)tfs_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)tfs_boolForKey:(id)arg1;
- (id)tfs_boolNumberForKey:(id)arg1;
- (id)tfs_anyObject;
- (id)tfs_objectForAnyOfKeys:(id)arg1;
- (id)tfs_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)tfs_dateForKey:(id)arg1;
- (id)tfs_numberForKey:(id)arg1;
- (id)tfs_setForKey:(id)arg1;
- (id)tfs_dictionaryForKey:(id)arg1;
- (id)tfs_arrayOfDictionariesForKey:(id)arg1;
- (id)tfs_arrayForKey:(id)arg1;
- (id)tfs_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)tfs_stringForKey:(id)arg1;
- (id)tfs_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)tfs_objectForKey:(id)arg1;
@end

