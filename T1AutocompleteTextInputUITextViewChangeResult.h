//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/T1AutocompleteTextInputChangeResult-Protocol.h>

@class NSString;

@interface T1AutocompleteTextInputUITextViewChangeResult : NSObject <NSCopying, T1AutocompleteTextInputChangeResult>
{
    _Bool _textChanged;
    _Bool _selectedRangeChanged;
}

@property(nonatomic, getter=isSelectedRangeChanged) _Bool selectedRangeChanged; // @synthesize selectedRangeChanged=_selectedRangeChanged;
@property(nonatomic, getter=isTextChanged) _Bool textChanged; // @synthesize textChanged=_textChanged;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

