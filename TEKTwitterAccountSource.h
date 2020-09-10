//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TEKTwitterUserSource;

@interface TEKTwitterAccountSource : NSObject
{
    TEKTwitterUserSource *_userSource;
    NSMutableArray *_mutableAccounts;
    NSString *_applicationGroupName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *applicationGroupName; // @synthesize applicationGroupName=_applicationGroupName;
@property(readonly, nonatomic) NSMutableArray *mutableAccounts; // @synthesize mutableAccounts=_mutableAccounts;
@property(retain, nonatomic) TEKTwitterUserSource *userSource; // @synthesize userSource=_userSource;
- (id)_applicationSavedTwitterState;
- (void)_loadWithUserDefaultsDictionary:(id)arg1;
- (id)parentAppSelectedAccount;
@property(readonly, copy, nonatomic) NSArray *accounts;
- (id)initWithApplicationGroupName:(id)arg1 userSource:(id)arg2;

@end

