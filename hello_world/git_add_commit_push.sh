#!/bin/bash

# Check if a commit message is provided
if [ -z "$1" ]; then
    echo "Usage: ./git_add_commit_push.sh <commit_message>"
    exit 1
fi

# Git add, commit, and push
git add .
git commit -m "$1"
git push

