#!/bin/bash

echo "=== MENU DE DÉVELOPPEMENT ==="
echo "1. Compiler le jeu"
echo "2. Pousser vers GitHub"
echo "3. Taguer une version"
echo "4. Quitter"
read -p "Choix : " choix

case $choix in
  1)
    mkdir -p build && cd build
    cmake .. && make
    echo "✅ Compilation terminée"
    ;;
  2)
    read -p "Message de commit : " msg
    git add .
    git commit -m "$msg"
    git push origin $(git branch --show-current)
    echo "🚀 Code poussé sur GitHub"
    ;;
  3)
    read -p "Numéro de version (ex: v1.0.0) : " version
    git tag -a "$version" -m "Version $version"
    git push origin "$version"
    echo "📦 Version $version publiée"
    ;;
  4)
    echo "👋 À bientôt !"
    ;;
  *)
    echo "❌ Choix invalide"
    ;;
esac
